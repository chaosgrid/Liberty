#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd9e00);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bd9e16 _public_6bd9e16
#define public_6bd9e2b _public_6bd9e2b
#define public_6bd9e42 _public_6bd9e42
#define public_6bd9e55 _public_6bd9e55

PROC_DECLARE(0x6bd9e00, internal_6bd9e00, public_6bd9e00);
extern "C" NAKED register_t __cdecl internal_6bd9e00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp ebx, eax
        push ebp
        mov ebp, ecx
        je public_6bd9e55
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        public_6bd9e16 : nop
        mov esi, dword ptr ds : [edi+4]
        push 0xC
        call public_6c09d26
        add esp, 4
        test esi, esi
        mov dword ptr ds : [eax], edi
        jne public_6bd9e2b
        mov esi, eax
        public_6bd9e2b : nop
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6bd9e42
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_6bd9e42 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6bd9e16
        pop edi
        pop esi
        public_6bd9e55 : nop
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bd9e00)
    }
}

#undef public_6bd9e16
#undef public_6bd9e2b
#undef public_6bd9e42
#undef public_6bd9e55
