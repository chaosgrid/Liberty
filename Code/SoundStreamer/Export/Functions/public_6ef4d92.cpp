#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4d70);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4d92);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4e26);

#define public_6ef4daf _public_6ef4daf
#define public_6ef4dea _public_6ef4dea
#define public_6ef4dec _public_6ef4dec

PROC_DECLARE(0x6ef4d92, internal_6ef4d92, public_6ef4d92);
extern "C" NAKED register_t __cdecl internal_6ef4d92()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push 0xFFFFFFFE
/*FIXUP push offset _public_6ef4d70 @0x6ef4d9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ef4d70
        push dword ptr fs : [0]
        mov dword ptr fs : [0], esp
        public_6ef4daf : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [eax+0xC]
        cmp esi, 0xFFFFFFFF
        je public_6ef4dec
        cmp esi, dword ptr ss : [esp+0x24]
        je public_6ef4dec
        lea esi, ds:[esi+esi*2]
        mov ecx, dword ptr ds : [ebx+esi*4]
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        cmp dword ptr ds : [ebx+esi*4+4], 0
        jne public_6ef4dea
        push 0x101
        mov eax, dword ptr ds : [ebx+esi*4+8]
        call public_6ef4e26
        call dword ptr ds : [ebx+esi*4+8]
        public_6ef4dea : nop
        jmp public_6ef4daf
        public_6ef4dec : nop
        pop dword ptr fs : [0]
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ef4d92)
    }
}

#undef public_6ef4daf
#undef public_6ef4dea
#undef public_6ef4dec
