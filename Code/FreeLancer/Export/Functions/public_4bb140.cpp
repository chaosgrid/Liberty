#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4bb140);

#define public_4bb190 _public_4bb190
#define public_4bb1ac _public_4bb1ac

PROC_DECLARE(0x4bb140, internal_4bb140, public_4bb140);
extern "C" NAKED register_t __cdecl internal_4bb140()
{
    __asm
    {
        mov edx, dword ptr ds : [public_67eca8]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        mov ecx, ebx
        push edi
        sub ecx, eax
        sar ecx, 1
        push ecx
        push eax
        push ebp
        push edx
        call public_4347e0
        mov edi, eax
        add esp, 0x10
        test edi, edi
        jne public_4bb190
        push ebp
        push 0x2B3
/*FIXUP push offset public_5d5a4c @0x4bb176*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a4c
        mov eax, 0x100002
/*FIXUP push offset public_5c94a8 @0x4bb180*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_4bb190 : nop
        mov edx, dword ptr ds : [esi]
        lea ecx, ds:[edi+edi]
        add edx, ecx
        mov eax, edx
        cmp ebx, eax
        mov dword ptr ds : [esi], edx
        jne public_4bb1ac
        add eax, 0xFFFFFFFE
        mov dword ptr ds : [esi], eax
        mov word ptr ds : [eax], 0
        add dword ptr ds : [esi], 2
        public_4bb1ac : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4bb140)
    }
}

#undef public_4bb190
#undef public_4bb1ac
