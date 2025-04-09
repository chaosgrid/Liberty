#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_579620);
CLANG_FORWARD_PROC_SYMBOL(public_57b260);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3d48);

#define public_57b2a0 _public_57b2a0
#define public_57b2d7 _public_57b2d7

PROC_DECLARE(0x57b260, internal_57b260, public_57b260);
extern "C" NAKED register_t __cdecl internal_57b260()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c3d48 @0x57b262*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3d48
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ds : [ebx], offset public_5e476c
        mov dword ptr ds : [ebx+0x7C], offset public_5e4760
        mov ebp, dword ptr ds : [ebx+0x48C]
        mov edi, dword ptr ss : [ebp]
        xor esi, esi
        cmp edi, ebp
        mov dword ptr ss : [esp+0x1C], esi
        je public_57b2d7
        public_57b2a0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_45eeb0
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+0x490]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+0x490], ecx
        jne public_57b2a0
        xor esi, esi
        public_57b2d7 : nop
        mov eax, dword ptr ds : [ebx+0x48C]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0x48C], esi
        mov dword ptr ds : [ebx+0x490], esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_579620
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x57b260)
    }
}

#undef public_57b2a0
#undef public_57b2d7
