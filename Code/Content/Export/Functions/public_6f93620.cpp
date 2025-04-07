#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93620);

PROC_DECLARE(0x6f93620, internal_6f93620, public_6f93620);
extern "C" NAKED register_t __cdecl internal_6f93620()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [edx]
        xor ecx, ecx
        cmp eax, esi
        setne cl
        mov al, cl
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f93620)
    }
}
