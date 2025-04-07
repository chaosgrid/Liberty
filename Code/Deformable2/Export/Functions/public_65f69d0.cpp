#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f69d0);

#define public_65f6a06 _public_65f6a06
#define public_65f6a08 _public_65f6a08
#define public_65f6a14 _public_65f6a14
#define public_65f6a31 _public_65f6a31
#define public_65f6a4b _public_65f6a4b
#define public_65f6a76 _public_65f6a76
#define public_65f6a89 _public_65f6a89
#define public_65f6aab _public_65f6aab
#define public_65f6abd _public_65f6abd

PROC_DECLARE(0x65f69d0, internal_65f69d0, public_65f69d0);
extern "C" NAKED register_t __cdecl internal_65f69d0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        je public_65f6abd
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [public_6603144]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        test eax, eax
        mov al, byte ptr ds : [esi+0x30]
        setge cl
        test al, 1
        jne public_65f6a06
        test cl, cl
        je public_65f6a06
        xor cl, cl
        jmp public_65f6a08
        public_65f6a06 : nop
        mov cl, 1
        public_65f6a08 : nop
        test al, 2
        mov byte ptr ss : [esp+8], cl
        jne public_65f6a14
        test cl, cl
        je public_65f6a4b
        public_65f6a14 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebx
        push edi
        push eax
        call dword ptr ds : [edx+0xC]
        test al, al
        pop ebx
        jne public_65f6a31
        pop edi
        pop esi
        pop ecx
        ret 8
        public_65f6a31 : nop
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [public_6603144]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        test eax, eax
        jge public_65f6a4b
        pop edi
        xor al, al
        pop esi
        pop ecx
        ret 8
        public_65f6a4b : nop
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [public_6603148]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        mov edx, dword ptr ds : [esi+0x24]
        lea edi, ds:[esi+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        mov cl, byte ptr ds : [esi+0x30]
        test eax, eax
        setge al
        test cl, 1
        jne public_65f6a76
        test al, al
        jne public_65f6aab
        public_65f6a76 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+8]
        test al, al
        jne public_65f6a89
        pop edi
        pop esi
        pop ecx
        ret 8
        public_65f6a89 : nop
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [public_6603148]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        mov edx, dword ptr ds : [edi]
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        test eax, eax
        jge public_65f6aab
        pop edi
        xor al, al
        pop esi
        pop ecx
        ret 8
        public_65f6aab : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+0x14]
        and byte ptr ds : [esi+0x30], 0xFC
        public_65f6abd : nop
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x65f69d0)
    }
}

#undef public_65f6a06
#undef public_65f6a08
#undef public_65f6a14
#undef public_65f6a31
#undef public_65f6a4b
#undef public_65f6a76
#undef public_65f6a89
#undef public_65f6aab
#undef public_65f6abd
