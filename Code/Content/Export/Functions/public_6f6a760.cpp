#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6a760);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a880);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafd22);

#define public_6f6a7c7 _public_6f6a7c7
#define public_6f6a7df _public_6f6a7df
#define public_6f6a807 _public_6f6a807
#define public_6f6a81e _public_6f6a81e

PROC_DECLARE(0x6f6a760, internal_6f6a760, public_6f6a760);
extern "C" NAKED register_t __cdecl internal_6f6a760()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafd22 @0x6f6a762*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafd22
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x10], edi
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x24], ebx
        je public_6f6a81e
        mov esi, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov cl, byte ptr ds : [esi+4]
        push 0x50C
        mov byte ptr ds : [edi+4], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], ebx
        mov ecx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x30], ecx
        je public_6f6a81e
        public_6f6a7c7 : nop
        mov ebx, dword ptr ds : [esi+4]
        push 0x50C
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_6f6a7df
        mov ebx, eax
        public_6f6a7df : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], ecx
        test ecx, ecx
        mov byte ptr ss : [esp+0x24], 1
        je public_6f6a807
        lea eax, ss:[ebp+8]
        push eax
        call public_6f6a880
        public_6f6a807 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ss : [esp+0x30]
        inc ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        mov byte ptr ss : [esp+0x24], 0
        jne public_6f6a7c7
        public_6f6a81e : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f6a760)
    }
}

#undef public_6f6a7c7
#undef public_6f6a7df
#undef public_6f6a807
#undef public_6f6a81e
