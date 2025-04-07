#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272990);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62729a6 _public_62729a6
#define public_62729bb _public_62729bb
#define public_62729de _public_62729de
#define public_62729f1 _public_62729f1

PROC_DECLARE(0x6272990, internal_6272990, public_6272990);
extern "C" NAKED register_t __cdecl internal_6272990()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp ebx, eax
        push ebp
        mov ebp, ecx
        je public_62729f1
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        public_62729a6 : nop
        mov esi, dword ptr ds : [edi+4]
        push 0x14
        call public_6391d9c
        add esp, 4
        test esi, esi
        mov dword ptr ds : [eax], edi
        jne public_62729bb
        mov esi, eax
        public_62729bb : nop
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_62729de
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [eax+8], edx
        public_62729de : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_62729a6
        pop edi
        pop esi
        public_62729f1 : nop
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6272990)
    }
}

#undef public_62729a6
#undef public_62729bb
#undef public_62729de
#undef public_62729f1
