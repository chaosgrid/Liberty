#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5987a0);
CLANG_FORWARD_PROC_SYMBOL(public_5998f0);
CLANG_FORWARD_PROC_SYMBOL(public_599980);

#define public_599910 _public_599910
#define public_599932 _public_599932
#define public_599940 _public_599940
#define public_59994e _public_59994e
#define public_599957 _public_599957
#define public_59996d _public_59996d

PROC_DECLARE(0x5998f0, internal_5998f0, public_5998f0);
extern "C" NAKED register_t __cdecl internal_5998f0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        mov edx, ecx
        mov ebp, dword ptr ds : [edx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], edx
        mov esi, eax
        je public_59994e
        mov ebx, edi
        sub ebx, eax
        public_599910 : nop
        mov al, byte ptr ds : [edi]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [ebx+esi+1]
        mov byte ptr ds : [esi+1], cl
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_599932
        call public_599980
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+4], 0
        public_599932 : nop
        mov eax, dword ptr ds : [ebx+esi+4]
        test eax, eax
        mov dword ptr ds : [esi+4], eax
        je public_599940
        inc dword ptr ds : [eax+4]
        public_599940 : nop
        add edi, 8
        add esi, 8
        cmp edi, ebp
        jne public_599910
        mov eax, dword ptr ss : [esp+0x18]
        public_59994e : nop
        mov ebx, dword ptr ds : [edx+8]
        cmp esi, ebx
        mov edi, esi
        je public_59996d
        public_599957 : nop
        mov ecx, edi
        call public_5987a0
        add edi, 8
        cmp edi, ebx
        jne public_599957
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        public_59996d : nop
        pop edi
        mov dword ptr ds : [edx+8], esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x5998f0)
    }
}

#undef public_599910
#undef public_599932
#undef public_599940
#undef public_59994e
#undef public_599957
#undef public_59996d
