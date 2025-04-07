#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6347550);
CLANG_FORWARD_PROC_SYMBOL(public_6348e10);
CLANG_FORWARD_PROC_SYMBOL(public_6348ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6349180);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6397b6b);

#define public_6347592 _public_6347592
#define public_63475cf _public_63475cf
#define public_63475d1 _public_63475d1

PROC_DECLARE(0x6347550, internal_6347550, public_6347550);
extern "C" NAKED register_t __cdecl internal_6347550()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6397b6b @0x6347558*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397b6b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push esi
        mov esi, ecx
        push edi
        xor eax, eax
        mov ecx, 0x6F
        mov edi, esi
        rep stosd
        lea edi, ds:[esi+0x50]
        lea eax, ds:[edi+8]
        mov dword ptr ds : [edi+4], eax
        mov word ptr ds : [edi], 1
        mov cx, word ptr ds : [edi+2]
        cmp cx, word ptr ds : [edi]
        jb public_6347592
        mov ecx, edi
        call public_63441a0
        public_6347592 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x18]
        xor edx, edx
        mov dx, word ptr ds : [edi+2]
        push 0x24
        mov dword ptr ds : [ecx+edx*4], eax
        inc word ptr ds : [edi+2]
        mov eax, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [esi+0xC], eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_63475cf
        mov ecx, eax
        call public_6348e10
        jmp public_63475d1
        public_63475cf : nop
        xor eax, eax
        public_63475d1 : nop
        push esi
        mov ecx, eax
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x15C], eax
        call public_6348ec0
        mov eax, dword ptr ds : [esi+0x15C]
        mov edx, dword ptr ds : [eax]
        and edx, 0xFFFFFF08
        or edx, 8
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        push ecx
        mov ecx, esi
        call public_6349180
        mov edx, dword ptr ds : [esi+0x60]
        mov ecx, dword ptr ss : [esp+8]
        and edx, 0xFFFFFF08
        or edx, 8
        mov dword ptr ds : [esi+0x60], edx
        pop edi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6347550)
    }
}

#undef public_6347592
#undef public_63475cf
#undef public_63475d1
