#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46cef0);
CLANG_FORWARD_PROC_SYMBOL(public_46dba0);
CLANG_FORWARD_PROC_SYMBOL(public_46df70);
CLANG_FORWARD_PROC_SYMBOL(public_46e970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46cf20 _public_46cf20
#define public_46cf3f _public_46cf3f
#define public_46cf6b _public_46cf6b
#define public_46cf70 _public_46cf70
#define public_46cf90 _public_46cf90

PROC_DECLARE(0x46cef0, internal_46cef0, public_46cef0);
extern "C" NAKED register_t __cdecl internal_46cef0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_46cf6b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_46cf6b
        cmp ebx, eax
        jne public_46cf6b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_46cf3f
        lea esp, ss:[esp]
        public_46cf20 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_46df70
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_46cf20
        public_46cf3f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_46cf6b : nop
        cmp ecx, ebx
        je public_46cf90
        nop 
        public_46cf70 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_46e970
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_46dba0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_46cf70
        public_46cf90 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x46cef0)
    }
}

#undef public_46cf20
#undef public_46cf3f
#undef public_46cf6b
#undef public_46cf70
#undef public_46cf90
