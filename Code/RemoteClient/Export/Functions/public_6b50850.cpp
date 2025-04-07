#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b50850);

#define public_6b50862 _public_6b50862
#define public_6b5087d _public_6b5087d
#define public_6b50881 _public_6b50881
#define public_6b50886 _public_6b50886

PROC_DECLARE(0x6b50850, internal_6b50850, public_6b50850);
extern "C" NAKED register_t __cdecl internal_6b50850()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+4]
        mov ebx, eax
        cmp esi, dword ptr ds : [edi+8]
        je public_6b50886
        public_6b50862 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        call dword ptr ds : [public_6b6b15c]
        add esp, 8
        test al, al
        je public_6b5087d
        mov esi, dword ptr ds : [esi+8]
        jmp public_6b50881
        public_6b5087d : nop
        mov ebx, esi
        mov esi, dword ptr ds : [esi]
        public_6b50881 : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_6b50862
        public_6b50886 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6b50850)
    }
}

#undef public_6b50862
#undef public_6b5087d
#undef public_6b50881
#undef public_6b50886
