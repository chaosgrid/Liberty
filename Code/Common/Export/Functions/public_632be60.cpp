#include "Common-PCH.h"


#define public_632beb6 _public_632beb6
#define public_632becd _public_632becd
#define public_632befd _public_632befd
#define public_632bf17 _public_632bf17
#define public_632bf1c _public_632bf1c
#define public_632bf25 _public_632bf25
#define public_632bf34 _public_632bf34
#define public_632bf4d _public_632bf4d

PROC_DECLARE(0x632be60, internal_632be60, public_632be60);
extern "C" NAKED register_t __cdecl internal_632be60()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [eax+8]
        test edx, edx
        push ebx
        push ebp
        push esi
        push edi
        jbe public_632bf4d
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        je public_632bf4d
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        test eax, eax
        je public_632bf4d
        mov edx, dword ptr ds : [eax+0xC]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ds : [public_63991b4]
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [public_6399170]
        mov ecx, dword ptr ds : [eax]
        sub ecx, edx
        cmp ecx, ebp
        ja public_632beb6
        call ebx
        public_632beb6 : nop
        test ebp, ebp
        jbe public_632bf4d
        mov edi, dword ptr ds : [esi+8]
        add edi, ebp
        cmp edi, 0x7FFFFFFD
        jbe public_632becd
        call ebx
        public_632becd : nop
        mov eax, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp eax, ebx
        je public_632befd
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_632befd
        cmp cl, 0xFF
        je public_632befd
        cmp edi, ebx
        jne public_632bf1c
        dec cl
        mov byte ptr ds : [eax-1], cl
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_632befd : nop
        cmp edi, ebx
        jne public_632bf17
        cmp eax, ebx
        je public_632bf4d
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_639916c]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_632bf17 : nop
        cmp dword ptr ds : [esi+0xC], edi
        jae public_632bf25
        public_632bf1c : nop
        mov ecx, esi
        push edi
        call dword ptr ds : [public_6399158]
        public_632bf25 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ds:[eax+edx*2]
        mov edx, ebp
        public_632bf34 : nop
        mov bp, word ptr ds : [ecx]
        mov word ptr ds : [eax], bp
        add eax, 2
        add ecx, 2
        dec edx
        jne public_632bf34
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [ecx+edi*2], bx
        public_632bf4d : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x632be60)
    }
}

#undef public_632beb6
#undef public_632becd
#undef public_632befd
#undef public_632bf17
#undef public_632bf1c
#undef public_632bf25
#undef public_632bf34
#undef public_632bf4d
