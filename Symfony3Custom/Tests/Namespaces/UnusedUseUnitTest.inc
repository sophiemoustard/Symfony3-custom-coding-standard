<?php

namespace MyProject;

use BarClass as Bar;
use Foo;
use Route;
use ORM;
use Truc;
use Machin;
use Machine;
use Unused;
use Client;
use Clients;
use PasClient;

class Container
{
    /**
     * @Foo
     * @Route("/{id}")
     * @ORM\Column(type="integer")
     *
     * @param Toto $toto
     * @var Truc $truc
     * @return Machin|Machine
     */
    function test (Bar $bar)
    {
        /** @var Client|Clients[]|PasClient $client */

        return;
    }
}
