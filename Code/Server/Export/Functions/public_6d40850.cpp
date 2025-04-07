#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40850);

#define public_6d40867 _public_6d40867
#define public_6d40879 _public_6d40879

PROC_DECLARE(0x6d40850, internal_6d40850, public_6d40850);
extern "C" NAKED register_t __cdecl internal_6d40850()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, eax
        push edi
        je public_6d40879
        mov edi, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6d40867 : nop
        mov ecx, dword ptr ds : [esi+8]
        push edi
        call ebx
        test al, al
        jne public_6d40879
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x18]
        jne public_6d40867
        public_6d40879 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d40850)
    }
}

#undef public_6d40867
#undef public_6d40879
