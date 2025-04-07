#include "Common-PCH.h"


#define public_62ae807 _public_62ae807
#define public_62ae810 _public_62ae810
#define public_62ae819 _public_62ae819
#define public_62ae822 _public_62ae822
#define public_62ae82b _public_62ae82b
#define public_62ae834 _public_62ae834
#define public_62ae83d _public_62ae83d
#define public_62ae85d _public_62ae85d
#define public_62ae866 _public_62ae866
#define public_62ae86f _public_62ae86f
#define public_62ae886 _public_62ae886
#define public_62ae88f _public_62ae88f

PROC_DECLARE(0x62ae7e0, internal_62ae7e0, public_62ae7e0);
extern "C" NAKED register_t __cdecl internal_62ae7e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x303
        jg public_62ae83d
        je public_62ae834
        dec eax
        cmp eax, 0xA6
        ja public_62ae88f
/*FIXUP movzx eax, byte ptr ds : [eax+public_62ae8ac] @0x62ae7f9*/
/*FIXUP jmp dword ptr ds : [eax*4+public_62ae894] @0x62ae800*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c000000000054ba
  JMPTB mov eax, 0
  JMPTB public_4c000000000054ba : nop
        je public_62ae807
  JMPTB cmp eax, 1
  JMPTB jne public_4c000000000054b6
  JMPTB mov eax, 5
  JMPTB public_4c000000000054b6 : nop
        je public_62ae88f
  JMPTB cmp eax, 2
  JMPTB jne public_4c000000000054b2
  JMPTB mov eax, 5
  JMPTB public_4c000000000054b2 : nop
        je public_62ae88f
  JMPTB cmp eax, 3
  JMPTB jne public_4c000000000054ae
  JMPTB mov eax, 5
  JMPTB public_4c000000000054ae : nop
        je public_62ae88f
  JMPTB cmp eax, 4
  JMPTB jne public_4c000000000054aa
  JMPTB mov eax, 5
  JMPTB public_4c000000000054aa : nop
        je public_62ae88f
  JMPTB cmp eax, 5
  JMPTB jne public_4c000000000054a6
  JMPTB mov eax, 5
  JMPTB public_4c000000000054a6 : nop
        je public_62ae88f
  JMPTB cmp eax, 6
  JMPTB jne public_4c000000000054a2
  JMPTB mov eax, 5
  JMPTB public_4c000000000054a2 : nop
        je public_62ae88f
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000549e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000549e : nop
        je public_62ae88f
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000549a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000549a : nop
        je public_62ae88f
  JMPTB cmp eax, 9
  JMPTB jne public_4c00000000005496
  JMPTB mov eax, 5
  JMPTB public_4c00000000005496 : nop
        je public_62ae88f
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c00000000005492
  JMPTB mov eax, 5
  JMPTB public_4c00000000005492 : nop
        je public_62ae88f
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000548e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000548e : nop
        je public_62ae88f
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000548a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000548a : nop
        je public_62ae88f
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c00000000005486
  JMPTB mov eax, 5
  JMPTB public_4c00000000005486 : nop
        je public_62ae88f
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c00000000005482
  JMPTB mov eax, 1
  JMPTB public_4c00000000005482 : nop
        je public_62ae822
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000547e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000547e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000547a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000547a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c00000000005476
  JMPTB mov eax, 5
  JMPTB public_4c00000000005476 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c00000000005472
  JMPTB mov eax, 5
  JMPTB public_4c00000000005472 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000546e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000546e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000546a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000546a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c00000000005466
  JMPTB mov eax, 5
  JMPTB public_4c00000000005466 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c00000000005462
  JMPTB mov eax, 2
  JMPTB public_4c00000000005462 : nop
        je public_62ae82b
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000545e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000545e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000545a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000545a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c00000000005456
  JMPTB mov eax, 5
  JMPTB public_4c00000000005456 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c00000000005452
  JMPTB mov eax, 5
  JMPTB public_4c00000000005452 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000544e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000544e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c0000000000544a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000544a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c00000000005446
  JMPTB mov eax, 5
  JMPTB public_4c00000000005446 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c00000000005442
  JMPTB mov eax, 5
  JMPTB public_4c00000000005442 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c0000000000543e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000543e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c0000000000543a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000543a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c00000000005436
  JMPTB mov eax, 5
  JMPTB public_4c00000000005436 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c00000000005432
  JMPTB mov eax, 5
  JMPTB public_4c00000000005432 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c0000000000542e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000542e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c0000000000542a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000542a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c00000000005426
  JMPTB mov eax, 5
  JMPTB public_4c00000000005426 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c00000000005422
  JMPTB mov eax, 5
  JMPTB public_4c00000000005422 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c0000000000541e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000541e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c0000000000541a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000541a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c00000000005416
  JMPTB mov eax, 5
  JMPTB public_4c00000000005416 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c00000000005412
  JMPTB mov eax, 5
  JMPTB public_4c00000000005412 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c0000000000540e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000540e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x2C
  JMPTB jne public_4c0000000000540a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000540a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x2D
  JMPTB jne public_4c00000000005406
  JMPTB mov eax, 5
  JMPTB public_4c00000000005406 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x2E
  JMPTB jne public_4c00000000005402
  JMPTB mov eax, 5
  JMPTB public_4c00000000005402 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x2F
  JMPTB jne public_4c000000000053fe
  JMPTB mov eax, 5
  JMPTB public_4c000000000053fe : nop
        je public_62ae88f
  JMPTB cmp eax, 0x30
  JMPTB jne public_4c000000000053fa
  JMPTB mov eax, 5
  JMPTB public_4c000000000053fa : nop
        je public_62ae88f
  JMPTB cmp eax, 0x31
  JMPTB jne public_4c000000000053f6
  JMPTB mov eax, 5
  JMPTB public_4c000000000053f6 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x32
  JMPTB jne public_4c000000000053f2
  JMPTB mov eax, 5
  JMPTB public_4c000000000053f2 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x33
  JMPTB jne public_4c000000000053ee
  JMPTB mov eax, 5
  JMPTB public_4c000000000053ee : nop
        je public_62ae88f
  JMPTB cmp eax, 0x34
  JMPTB jne public_4c000000000053ea
  JMPTB mov eax, 5
  JMPTB public_4c000000000053ea : nop
        je public_62ae88f
  JMPTB cmp eax, 0x35
  JMPTB jne public_4c000000000053e6
  JMPTB mov eax, 5
  JMPTB public_4c000000000053e6 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x36
  JMPTB jne public_4c000000000053e2
  JMPTB mov eax, 5
  JMPTB public_4c000000000053e2 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x37
  JMPTB jne public_4c000000000053de
  JMPTB mov eax, 5
  JMPTB public_4c000000000053de : nop
        je public_62ae88f
  JMPTB cmp eax, 0x38
  JMPTB jne public_4c000000000053da
  JMPTB mov eax, 5
  JMPTB public_4c000000000053da : nop
        je public_62ae88f
  JMPTB cmp eax, 0x39
  JMPTB jne public_4c000000000053d6
  JMPTB mov eax, 5
  JMPTB public_4c000000000053d6 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x3A
  JMPTB jne public_4c000000000053d2
  JMPTB mov eax, 5
  JMPTB public_4c000000000053d2 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x3B
  JMPTB jne public_4c000000000053ce
  JMPTB mov eax, 5
  JMPTB public_4c000000000053ce : nop
        je public_62ae88f
  JMPTB cmp eax, 0x3C
  JMPTB jne public_4c000000000053ca
  JMPTB mov eax, 5
  JMPTB public_4c000000000053ca : nop
        je public_62ae88f
  JMPTB cmp eax, 0x3D
  JMPTB jne public_4c000000000053c6
  JMPTB mov eax, 5
  JMPTB public_4c000000000053c6 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x3E
  JMPTB jne public_4c000000000053c2
  JMPTB mov eax, 5
  JMPTB public_4c000000000053c2 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x3F
  JMPTB jne public_4c000000000053be
  JMPTB mov eax, 5
  JMPTB public_4c000000000053be : nop
        je public_62ae88f
  JMPTB cmp eax, 0x40
  JMPTB jne public_4c000000000053ba
  JMPTB mov eax, 5
  JMPTB public_4c000000000053ba : nop
        je public_62ae88f
  JMPTB cmp eax, 0x41
  JMPTB jne public_4c000000000053b6
  JMPTB mov eax, 5
  JMPTB public_4c000000000053b6 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x42
  JMPTB jne public_4c000000000053b2
  JMPTB mov eax, 5
  JMPTB public_4c000000000053b2 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x43
  JMPTB jne public_4c000000000053ae
  JMPTB mov eax, 5
  JMPTB public_4c000000000053ae : nop
        je public_62ae88f
  JMPTB cmp eax, 0x44
  JMPTB jne public_4c000000000053aa
  JMPTB mov eax, 5
  JMPTB public_4c000000000053aa : nop
        je public_62ae88f
  JMPTB cmp eax, 0x45
  JMPTB jne public_4c000000000053a6
  JMPTB mov eax, 5
  JMPTB public_4c000000000053a6 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x46
  JMPTB jne public_4c000000000053a2
  JMPTB mov eax, 5
  JMPTB public_4c000000000053a2 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x47
  JMPTB jne public_4c0000000000539e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000539e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x48
  JMPTB jne public_4c0000000000539a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000539a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x49
  JMPTB jne public_4c00000000005396
  JMPTB mov eax, 5
  JMPTB public_4c00000000005396 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x4A
  JMPTB jne public_4c00000000005392
  JMPTB mov eax, 5
  JMPTB public_4c00000000005392 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x4B
  JMPTB jne public_4c0000000000538e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000538e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x4C
  JMPTB jne public_4c0000000000538a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000538a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x4D
  JMPTB jne public_4c00000000005386
  JMPTB mov eax, 5
  JMPTB public_4c00000000005386 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x4E
  JMPTB jne public_4c00000000005382
  JMPTB mov eax, 5
  JMPTB public_4c00000000005382 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x4F
  JMPTB jne public_4c0000000000537e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000537e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x50
  JMPTB jne public_4c0000000000537a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000537a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x51
  JMPTB jne public_4c00000000005376
  JMPTB mov eax, 5
  JMPTB public_4c00000000005376 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x52
  JMPTB jne public_4c00000000005372
  JMPTB mov eax, 5
  JMPTB public_4c00000000005372 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x53
  JMPTB jne public_4c0000000000536e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000536e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x54
  JMPTB jne public_4c0000000000536a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000536a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x55
  JMPTB jne public_4c00000000005366
  JMPTB mov eax, 5
  JMPTB public_4c00000000005366 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x56
  JMPTB jne public_4c00000000005362
  JMPTB mov eax, 5
  JMPTB public_4c00000000005362 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x57
  JMPTB jne public_4c0000000000535e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000535e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x58
  JMPTB jne public_4c0000000000535a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000535a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x59
  JMPTB jne public_4c00000000005356
  JMPTB mov eax, 5
  JMPTB public_4c00000000005356 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x5A
  JMPTB jne public_4c00000000005352
  JMPTB mov eax, 5
  JMPTB public_4c00000000005352 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x5B
  JMPTB jne public_4c0000000000534e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000534e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x5C
  JMPTB jne public_4c0000000000534a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000534a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x5D
  JMPTB jne public_4c00000000005346
  JMPTB mov eax, 5
  JMPTB public_4c00000000005346 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x5E
  JMPTB jne public_4c00000000005342
  JMPTB mov eax, 5
  JMPTB public_4c00000000005342 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x5F
  JMPTB jne public_4c0000000000533e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000533e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x60
  JMPTB jne public_4c0000000000533a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000533a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x61
  JMPTB jne public_4c00000000005336
  JMPTB mov eax, 5
  JMPTB public_4c00000000005336 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x62
  JMPTB jne public_4c00000000005332
  JMPTB mov eax, 5
  JMPTB public_4c00000000005332 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x63
  JMPTB jne public_4c0000000000532e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000532e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x64
  JMPTB jne public_4c0000000000532a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000532a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x65
  JMPTB jne public_4c00000000005326
  JMPTB mov eax, 5
  JMPTB public_4c00000000005326 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x66
  JMPTB jne public_4c00000000005322
  JMPTB mov eax, 3
  JMPTB public_4c00000000005322 : nop
        je public_62ae810
  JMPTB cmp eax, 0x67
  JMPTB jne public_4c0000000000531e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000531e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x68
  JMPTB jne public_4c0000000000531a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000531a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x69
  JMPTB jne public_4c00000000005316
  JMPTB mov eax, 5
  JMPTB public_4c00000000005316 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x6A
  JMPTB jne public_4c00000000005312
  JMPTB mov eax, 5
  JMPTB public_4c00000000005312 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x6B
  JMPTB jne public_4c0000000000530e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000530e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x6C
  JMPTB jne public_4c0000000000530a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000530a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x6D
  JMPTB jne public_4c00000000005306
  JMPTB mov eax, 5
  JMPTB public_4c00000000005306 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x6E
  JMPTB jne public_4c00000000005302
  JMPTB mov eax, 5
  JMPTB public_4c00000000005302 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x6F
  JMPTB jne public_4c000000000052fe
  JMPTB mov eax, 5
  JMPTB public_4c000000000052fe : nop
        je public_62ae88f
  JMPTB cmp eax, 0x70
  JMPTB jne public_4c000000000052fa
  JMPTB mov eax, 5
  JMPTB public_4c000000000052fa : nop
        je public_62ae88f
  JMPTB cmp eax, 0x71
  JMPTB jne public_4c000000000052f6
  JMPTB mov eax, 5
  JMPTB public_4c000000000052f6 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x72
  JMPTB jne public_4c000000000052f2
  JMPTB mov eax, 5
  JMPTB public_4c000000000052f2 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x73
  JMPTB jne public_4c000000000052ee
  JMPTB mov eax, 5
  JMPTB public_4c000000000052ee : nop
        je public_62ae88f
  JMPTB cmp eax, 0x74
  JMPTB jne public_4c000000000052ea
  JMPTB mov eax, 5
  JMPTB public_4c000000000052ea : nop
        je public_62ae88f
  JMPTB cmp eax, 0x75
  JMPTB jne public_4c000000000052e6
  JMPTB mov eax, 5
  JMPTB public_4c000000000052e6 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x76
  JMPTB jne public_4c000000000052e2
  JMPTB mov eax, 5
  JMPTB public_4c000000000052e2 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x77
  JMPTB jne public_4c000000000052de
  JMPTB mov eax, 5
  JMPTB public_4c000000000052de : nop
        je public_62ae88f
  JMPTB cmp eax, 0x78
  JMPTB jne public_4c000000000052da
  JMPTB mov eax, 5
  JMPTB public_4c000000000052da : nop
        je public_62ae88f
  JMPTB cmp eax, 0x79
  JMPTB jne public_4c000000000052d6
  JMPTB mov eax, 5
  JMPTB public_4c000000000052d6 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x7A
  JMPTB jne public_4c000000000052d2
  JMPTB mov eax, 5
  JMPTB public_4c000000000052d2 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x7B
  JMPTB jne public_4c000000000052ce
  JMPTB mov eax, 5
  JMPTB public_4c000000000052ce : nop
        je public_62ae88f
  JMPTB cmp eax, 0x7C
  JMPTB jne public_4c000000000052ca
  JMPTB mov eax, 5
  JMPTB public_4c000000000052ca : nop
        je public_62ae88f
  JMPTB cmp eax, 0x7D
  JMPTB jne public_4c000000000052c6
  JMPTB mov eax, 5
  JMPTB public_4c000000000052c6 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x7E
  JMPTB jne public_4c000000000052c2
  JMPTB mov eax, 5
  JMPTB public_4c000000000052c2 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x7F
  JMPTB jne public_4c000000000052be
  JMPTB mov eax, 5
  JMPTB public_4c000000000052be : nop
        je public_62ae88f
  JMPTB cmp eax, 0x80
  JMPTB jne public_4c000000000052ba
  JMPTB mov eax, 5
  JMPTB public_4c000000000052ba : nop
        je public_62ae88f
  JMPTB cmp eax, 0x81
  JMPTB jne public_4c000000000052b6
  JMPTB mov eax, 5
  JMPTB public_4c000000000052b6 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x82
  JMPTB jne public_4c000000000052b2
  JMPTB mov eax, 5
  JMPTB public_4c000000000052b2 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x83
  JMPTB jne public_4c000000000052ae
  JMPTB mov eax, 5
  JMPTB public_4c000000000052ae : nop
        je public_62ae88f
  JMPTB cmp eax, 0x84
  JMPTB jne public_4c000000000052aa
  JMPTB mov eax, 5
  JMPTB public_4c000000000052aa : nop
        je public_62ae88f
  JMPTB cmp eax, 0x85
  JMPTB jne public_4c000000000052a6
  JMPTB mov eax, 5
  JMPTB public_4c000000000052a6 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x86
  JMPTB jne public_4c000000000052a2
  JMPTB mov eax, 5
  JMPTB public_4c000000000052a2 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x87
  JMPTB jne public_4c0000000000529e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000529e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x88
  JMPTB jne public_4c0000000000529a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000529a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x89
  JMPTB jne public_4c00000000005296
  JMPTB mov eax, 5
  JMPTB public_4c00000000005296 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x8A
  JMPTB jne public_4c00000000005292
  JMPTB mov eax, 5
  JMPTB public_4c00000000005292 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x8B
  JMPTB jne public_4c0000000000528e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000528e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x8C
  JMPTB jne public_4c0000000000528a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000528a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x8D
  JMPTB jne public_4c00000000005286
  JMPTB mov eax, 5
  JMPTB public_4c00000000005286 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x8E
  JMPTB jne public_4c00000000005282
  JMPTB mov eax, 5
  JMPTB public_4c00000000005282 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x8F
  JMPTB jne public_4c0000000000527e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000527e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x90
  JMPTB jne public_4c0000000000527a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000527a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x91
  JMPTB jne public_4c00000000005276
  JMPTB mov eax, 5
  JMPTB public_4c00000000005276 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x92
  JMPTB jne public_4c00000000005272
  JMPTB mov eax, 5
  JMPTB public_4c00000000005272 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x93
  JMPTB jne public_4c0000000000526e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000526e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x94
  JMPTB jne public_4c0000000000526a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000526a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x95
  JMPTB jne public_4c00000000005266
  JMPTB mov eax, 5
  JMPTB public_4c00000000005266 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x96
  JMPTB jne public_4c00000000005262
  JMPTB mov eax, 5
  JMPTB public_4c00000000005262 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x97
  JMPTB jne public_4c0000000000525e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000525e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x98
  JMPTB jne public_4c0000000000525a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000525a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x99
  JMPTB jne public_4c00000000005256
  JMPTB mov eax, 5
  JMPTB public_4c00000000005256 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x9A
  JMPTB jne public_4c00000000005252
  JMPTB mov eax, 5
  JMPTB public_4c00000000005252 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x9B
  JMPTB jne public_4c0000000000524e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000524e : nop
        je public_62ae88f
  JMPTB cmp eax, 0x9C
  JMPTB jne public_4c0000000000524a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000524a : nop
        je public_62ae88f
  JMPTB cmp eax, 0x9D
  JMPTB jne public_4c00000000005246
  JMPTB mov eax, 5
  JMPTB public_4c00000000005246 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x9E
  JMPTB jne public_4c00000000005242
  JMPTB mov eax, 5
  JMPTB public_4c00000000005242 : nop
        je public_62ae88f
  JMPTB cmp eax, 0x9F
  JMPTB jne public_4c0000000000523e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000523e : nop
        je public_62ae88f
  JMPTB cmp eax, 0xA0
  JMPTB jne public_4c0000000000523a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000523a : nop
        je public_62ae88f
  JMPTB cmp eax, 0xA1
  JMPTB jne public_4c00000000005236
  JMPTB mov eax, 5
  JMPTB public_4c00000000005236 : nop
        je public_62ae88f
  JMPTB cmp eax, 0xA2
  JMPTB jne public_4c00000000005232
  JMPTB mov eax, 5
  JMPTB public_4c00000000005232 : nop
        je public_62ae88f
  JMPTB cmp eax, 0xA3
  JMPTB jne public_4c0000000000522e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000522e : nop
        je public_62ae88f
  JMPTB cmp eax, 0xA4
  JMPTB jne public_4c0000000000522a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000522a : nop
        je public_62ae88f
  JMPTB cmp eax, 0xA5
  JMPTB jne public_4c00000000005226
  JMPTB mov eax, 5
  JMPTB public_4c00000000005226 : nop
        je public_62ae88f
  JMPTB cmp eax, 0xA6
  JMPTB jne public_4c00000000005222
  JMPTB mov eax, 4
  JMPTB public_4c00000000005222 : nop
        je public_62ae819
  JMPTB int 3
        public_62ae807 : nop
        mov eax, offset public_63fc32c
        mov eax, dword ptr ds : [eax+8]
        ret 
        public_62ae810 : nop
        mov eax, offset public_63fc398
        mov eax, dword ptr ds : [eax+8]
        ret 
        public_62ae819 : nop
        mov eax, offset public_63fc38c
        mov eax, dword ptr ds : [eax+8]
        ret 
        public_62ae822 : nop
        mov eax, offset public_63fc374
        mov eax, dword ptr ds : [eax+8]
        ret 
        public_62ae82b : nop
        mov eax, offset public_63fc368
        mov eax, dword ptr ds : [eax+8]
        ret 
        public_62ae834 : nop
        mov eax, offset public_63fc35c
        mov eax, dword ptr ds : [eax+8]
        ret 
        public_62ae83d : nop
        cmp eax, 0x1003
        jg public_62ae86f
        je public_62ae866
        cmp eax, 0x503
        je public_62ae85d
        cmp eax, 0x803
        jne public_62ae88f
        mov eax, offset public_63fc380
        mov eax, dword ptr ds : [eax+8]
        ret 
        public_62ae85d : nop
        mov eax, offset public_63fc3a4
        mov eax, dword ptr ds : [eax+8]
        ret 
        public_62ae866 : nop
        mov eax, offset public_63fc350
        mov eax, dword ptr ds : [eax+8]
        ret 
        public_62ae86f : nop
        cmp eax, 0x2001
        je public_62ae886
        cmp eax, 0x4001
        jne public_62ae88f
        mov eax, offset public_63fc344
        mov eax, dword ptr ds : [eax+8]
        ret 
        public_62ae886 : nop
        mov eax, offset public_63fc338
        mov eax, dword ptr ds : [eax+8]
        ret 
        public_62ae88f : nop
        or eax, 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x62ae7e0)
        ASM_EXPORT_ENTRY_FIRST(0x62ae807, public_62ae807)
        ASM_EXPORT_ENTRY(0x62ae810, public_62ae810)
        ASM_EXPORT_ENTRY(0x62ae819, public_62ae819)
        ASM_EXPORT_ENTRY(0x62ae822, public_62ae822)
        ASM_EXPORT_ENTRY(0x62ae82b, public_62ae82b)
        ASM_EXPORT_ENTRY_LAST(0x62ae88f, public_62ae88f)
    }
}

#undef public_62ae807
#undef public_62ae810
#undef public_62ae819
#undef public_62ae822
#undef public_62ae82b
#undef public_62ae834
#undef public_62ae83d
#undef public_62ae85d
#undef public_62ae866
#undef public_62ae86f
#undef public_62ae886
#undef public_62ae88f

#pragma init_seg(compiler)
extern "C" void const* const public_62ae807 = __AsmFindLabelExport(&internal_62ae7e0, 0x62ae807);
extern "C" void const* const public_62ae810 = __AsmFindLabelExport(&internal_62ae7e0, 0x62ae810);
extern "C" void const* const public_62ae819 = __AsmFindLabelExport(&internal_62ae7e0, 0x62ae819);
extern "C" void const* const public_62ae822 = __AsmFindLabelExport(&internal_62ae7e0, 0x62ae822);
extern "C" void const* const public_62ae82b = __AsmFindLabelExport(&internal_62ae7e0, 0x62ae82b);
extern "C" void const* const public_62ae88f = __AsmFindLabelExport(&internal_62ae7e0, 0x62ae88f);
