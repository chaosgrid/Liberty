#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_473cb0);
CLANG_FORWARD_PROC_SYMBOL(public_561560);
CLANG_FORWARD_PROC_SYMBOL(public_561b20);
CLANG_FORWARD_PROC_SYMBOL(public_57bff0);
CLANG_FORWARD_PROC_SYMBOL(public_57c0e0);
CLANG_FORWARD_PROC_SYMBOL(public_57c2c0);
CLANG_FORWARD_PROC_SYMBOL(public_5aa750);

#define public_5615c6 _public_5615c6
#define public_5615e8 _public_5615e8
#define public_561601 _public_561601
#define public_561612 _public_561612
#define public_561614 _public_561614

PROC_DECLARE(0x561560, internal_561560, public_561560);
extern "C" NAKED register_t __cdecl internal_561560()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xB8]
        mov ecx, dword ptr ds : [esi+0x110]
        push 0x18
        push eax
        call public_57c2c0
        mov ecx, dword ptr ds : [esi+0xB8]
/*FIXUP push offset public_5e1b7c @0x56157d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1b7c
        push ecx
        call dword ptr ds : [public_5c71d4]
        add esp, 8
        test eax, eax
        jne public_5615c6
        mov edx, dword ptr ds : [esi+0xB8]
        push ebx
        push edi
/*FIXUP push offset public_614344 @0x561598*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_614344
        push edx
        call dword ptr ds : [public_5c70b4]
        mov edi, dword ptr ds : [esi+0x110]
        mov ebx, dword ptr ds : [esi+0xB8]
        add esp, 8
        mov ecx, edi
        call public_57bff0
        push 0
        push ebx
        mov ecx, edi
        call public_57c0e0
        pop edi
        pop ebx
        public_5615c6 : nop
        mov eax, dword ptr ds : [esi+0xB8]
        cmp word ptr ds : [eax], 0
        je public_561612
        push eax
        mov ecx, offset public_67e7b8
        call public_5aa750
        dec eax
        je public_561614
        dec eax
        je public_5615e8
        sub eax, 2
        je public_561601
        public_5615e8 : nop
        mov dword ptr ds : [esi+0xE4], 2
        mov byte ptr ds : [esi+0xE0], 1
        mov ecx, esi
        pop esi
        jmp public_561b20
        public_561601 : nop
        push 0
        push 0
        push 0x738
        call public_473cb0
        add esp, 0xC
        public_561612 : nop
        pop esi
        ret 
        public_561614 : nop
        mov eax, 1
        mov dword ptr ds : [esi+0xE4], eax
        mov byte ptr ds : [esi+0xE0], al
        mov ecx, esi
        pop esi
        jmp public_561b20
        UNREACHABLE_TRAP(0x561560)
    }
}

#undef public_5615c6
#undef public_5615e8
#undef public_561601
#undef public_561612
#undef public_561614
