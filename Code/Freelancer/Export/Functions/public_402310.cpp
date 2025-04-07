#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402310);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_402367 _public_402367
#define public_402369 _public_402369
#define public_40236c _public_40236c
#define public_402380 _public_402380
#define public_4023a4 _public_4023a4
#define public_4023a6 _public_4023a6
#define public_4023bf _public_4023bf
#define public_4023c5 _public_4023c5
#define public_4023ea _public_4023ea

PROC_DECLARE(0x402310, internal_402310, public_402310);
extern "C" NAKED register_t __cdecl internal_402310()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_5c6cf4]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
/*FIXUP push offset public_5c7510 @0x40231c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7510
        mov ecx, edi
        call esi
        test al, al
        je public_4023c5
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        cmp dword ptr ss : [ebp], 0
        jne public_40236c
        push 0x34
        call public_5b7e84
        add esp, 4
        test eax, eax
        je public_402367
        mov dword ptr ds : [eax+0x24], 0
        mov byte ptr ds : [eax+0x28], 0
        mov dword ptr ds : [eax+0x2C], 1
        mov dword ptr ds : [eax+0x30], 0
        mov dword ptr ds : [eax], 0xBF800000
        jmp public_402369
        public_402367 : nop
        xor eax, eax
        public_402369 : nop
        mov dword ptr ss : [ebp], eax
        public_40236c : nop
        xor esi, esi
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c6cf8]
        test al, al
        jne public_4023a6
        nop 
        lea esp, ss:[esp]
        public_402380 : nop
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c6cfc]
        cmp esi, 8
        jge public_4023a4
        mov eax, dword ptr ss : [ebp]
        fstp dword ptr ds : [eax+esi*4]
        inc esi
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c6cf8]
        test al, al
        je public_402380
        jmp public_4023a6
        public_4023a4 : nop
        fstp st(0)
        public_4023a6 : nop
        cmp esi, 2
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [ecx+esi*4], 0xBF800000
        jg public_4023bf
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ds : [edx+0x2C], 0
        public_4023bf : nop
        pop ebp
        pop edi
        mov al, 1
        pop esi
        ret 
/*FIXUP public_4023c5 : nop
        push offset public_5c7504 @0x4023c5*/
  FIXUP public_4023c5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7504
        mov ecx, edi
        call esi
        test al, al
        je public_4023ea
        push 0
        mov ecx, edi
        call dword ptr ds : [public_5c6d00]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        pop edi
        mov dword ptr ds : [edx+0x2C], eax
        mov al, 1
        pop esi
        ret 
        public_4023ea : nop
        pop edi
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x402310)
    }
}

#undef public_402367
#undef public_402369
#undef public_40236c
#undef public_402380
#undef public_4023a4
#undef public_4023a6
#undef public_4023bf
#undef public_4023c5
#undef public_4023ea
