#include "Content-PCH.h"


#define public_6f9b438 _public_6f9b438
#define public_6f9b457 _public_6f9b457
#define public_6f9b476 _public_6f9b476
#define public_6f9b495 _public_6f9b495
#define public_6f9b4b4 _public_6f9b4b4
#define public_6f9b4d3 _public_6f9b4d3
#define public_6f9b4f2 _public_6f9b4f2
#define public_6f9b511 _public_6f9b511
#define public_6f9b530 _public_6f9b530
#define public_6f9b54f _public_6f9b54f
#define public_6f9b56e _public_6f9b56e
#define public_6f9b58d _public_6f9b58d
#define public_6f9b5ac _public_6f9b5ac
#define public_6f9b5cb _public_6f9b5cb
#define public_6f9b5ea _public_6f9b5ea
#define public_6f9b609 _public_6f9b609
#define public_6f9b628 _public_6f9b628
#define public_6f9b647 _public_6f9b647
#define public_6f9b666 _public_6f9b666
#define public_6f9b685 _public_6f9b685
#define public_6f9b6a4 _public_6f9b6a4
#define public_6f9b6c3 _public_6f9b6c3
#define public_6f9b6e2 _public_6f9b6e2
#define public_6f9b701 _public_6f9b701
#define public_6f9b720 _public_6f9b720
#define public_6f9b73f _public_6f9b73f
#define public_6f9b75e _public_6f9b75e
#define public_6f9b77b _public_6f9b77b

PROC_DECLARE(0x6f9b3f0, internal_6f9b3f0, public_6f9b3f0);
extern "C" NAKED register_t __cdecl internal_6f9b3f0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov byte ptr ss : [esp+0x13], 0
        je public_6f9b77b
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [public_6fb3000]
        mov bl, 1
/*FIXUP push offset public_6fbd3d0 @0x6f9b414*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd3d0
        mov byte ptr ss : [esp+0x17], bl
        lea esi, ds:[eax+4]
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b438
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0xC], bl
        pop ebp
        mov al, bl
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b438 : nop
        push offset public_6fbd3bc @0x6f9b438*/
  FIXUP public_6f9b438 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd3bc
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b457
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0xD], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b457 : nop
        push offset public_6fbd3a0 @0x6f9b457*/
  FIXUP public_6f9b457 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd3a0
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b476
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0xE], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b476 : nop
        push offset public_6fbd390 @0x6f9b476*/
  FIXUP public_6f9b476 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd390
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b495
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0xF], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b495 : nop
        push offset public_6fbd380 @0x6f9b495*/
  FIXUP public_6f9b495 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd380
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b4b4
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x10], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b4b4 : nop
        push offset public_6fbcd8c @0x6f9b4b4*/
  FIXUP public_6f9b4b4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcd8c
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b4d3
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x11], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b4d3 : nop
        push offset public_6fbd368 @0x6f9b4d3*/
  FIXUP public_6f9b4d3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd368
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b4f2
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x12], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b4f2 : nop
        push offset public_6fbd35c @0x6f9b4f2*/
  FIXUP public_6f9b4f2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd35c
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b511
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x13], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b511 : nop
        push offset public_6fbd340 @0x6f9b511*/
  FIXUP public_6f9b511 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd340
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b530
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x14], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b530 : nop
        push offset public_6fbd324 @0x6f9b530*/
  FIXUP public_6f9b530 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd324
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b54f
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x15], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b54f : nop
        push offset public_6fbd30c @0x6f9b54f*/
  FIXUP public_6f9b54f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd30c
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b56e
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x16], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b56e : nop
        push offset public_6fbd2f8 @0x6f9b56e*/
  FIXUP public_6f9b56e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd2f8
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b58d
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x17], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b58d : nop
        push offset public_6fbd2dc @0x6f9b58d*/
  FIXUP public_6f9b58d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd2dc
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b5ac
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x18], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b5ac : nop
        push offset public_6fbd2d0 @0x6f9b5ac*/
  FIXUP public_6f9b5ac : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd2d0
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b5cb
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x19], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b5cb : nop
        push offset public_6fbd2b0 @0x6f9b5cb*/
  FIXUP public_6f9b5cb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd2b0
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b5ea
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x1A], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b5ea : nop
        push offset public_6fbd290 @0x6f9b5ea*/
  FIXUP public_6f9b5ea : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd290
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b609
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x1B], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b609 : nop
        push offset public_6fbd274 @0x6f9b609*/
  FIXUP public_6f9b609 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd274
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b628
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x1C], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b628 : nop
        push offset public_6fbd250 @0x6f9b628*/
  FIXUP public_6f9b628 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd250
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b647
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x1D], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b647 : nop
        push offset public_6fbd234 @0x6f9b647*/
  FIXUP public_6f9b647 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd234
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b666
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x1E], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b666 : nop
        push offset public_6fbd224 @0x6f9b666*/
  FIXUP public_6f9b666 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd224
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b685
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x1F], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b685 : nop
        push offset public_6fbd210 @0x6f9b685*/
  FIXUP public_6f9b685 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd210
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b6a4
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x20], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b6a4 : nop
        push offset public_6fbd1fc @0x6f9b6a4*/
  FIXUP public_6f9b6a4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd1fc
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b6c3
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x21], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b6c3 : nop
        push offset public_6fbd1e8 @0x6f9b6c3*/
  FIXUP public_6f9b6c3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd1e8
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b6e2
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x22], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b6e2 : nop
        push offset public_6fbd1d4 @0x6f9b6e2*/
  FIXUP public_6f9b6e2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd1d4
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b701
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x23], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b701 : nop
        push offset public_6fbd1b4 @0x6f9b701*/
  FIXUP public_6f9b701 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd1b4
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b720
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x24], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b720 : nop
        push offset public_6fbd068 @0x6f9b720*/
  FIXUP public_6f9b720 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd068
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b73f
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x25], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b73f : nop
        push offset public_6fbd190 @0x6f9b73f*/
  FIXUP public_6f9b73f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd190
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        jne public_6f9b75e
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x26], bl
        pop ebp
        pop ebx
        pop ecx
        ret 8
/*FIXUP public_6f9b75e : nop
        push offset public_6fbd050 @0x6f9b75e*/
  FIXUP public_6f9b75e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd050
        call edi
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        cmp ecx, eax
        je public_6f9b77b
        mov ecx, esi
        call dword ptr ds : [public_6fb3050]
        mov byte ptr ss : [esp+0x13], 0
        public_6f9b77b : nop
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f9b3f0)
    }
}

#undef public_6f9b438
#undef public_6f9b457
#undef public_6f9b476
#undef public_6f9b495
#undef public_6f9b4b4
#undef public_6f9b4d3
#undef public_6f9b4f2
#undef public_6f9b511
#undef public_6f9b530
#undef public_6f9b54f
#undef public_6f9b56e
#undef public_6f9b58d
#undef public_6f9b5ac
#undef public_6f9b5cb
#undef public_6f9b5ea
#undef public_6f9b609
#undef public_6f9b628
#undef public_6f9b647
#undef public_6f9b666
#undef public_6f9b685
#undef public_6f9b6a4
#undef public_6f9b6c3
#undef public_6f9b6e2
#undef public_6f9b701
#undef public_6f9b720
#undef public_6f9b73f
#undef public_6f9b75e
#undef public_6f9b77b
