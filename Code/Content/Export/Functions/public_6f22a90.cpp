#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22a90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f22ab0 _public_6f22ab0
#define public_6f22ac8 _public_6f22ac8
#define public_6f22ae1 _public_6f22ae1
#define public_6f22af4 _public_6f22af4

PROC_DECLARE(0x6f22a90, internal_6f22a90, public_6f22a90);
extern "C" NAKED register_t __cdecl internal_6f22a90()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        cmp ebp, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6f22af4
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        lea esp, ss:[esp]
        public_6f22ab0 : nop
        mov edi, dword ptr ds : [ebx+4]
        push 0x3C
        lea esi, ss:[ebp+8]
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebx
        jne public_6f22ac8
        mov edi, eax
        public_6f22ac8 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6f22ae1
        mov ecx, 0xD
        rep movsd
        public_6f22ae1 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc dword ptr ds : [eax+8]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ss : [esp+0x20]
        jne public_6f22ab0
        pop edi
        pop esi
        pop ebx
        public_6f22af4 : nop
        pop ebp
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6f22a90)
    }
}

#undef public_6f22ab0
#undef public_6f22ac8
#undef public_6f22ae1
#undef public_6f22af4
