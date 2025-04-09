#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46cfa0);
CLANG_FORWARD_PROC_SYMBOL(public_46dba0);
CLANG_FORWARD_PROC_SYMBOL(public_46df70);
CLANG_FORWARD_PROC_SYMBOL(public_46e8c0);
CLANG_FORWARD_PROC_SYMBOL(public_46e940);
CLANG_FORWARD_PROC_SYMBOL(public_46e970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46cfc6 _public_46cfc6
#define public_46cfd0 _public_46cfd0
#define public_46cfd4 _public_46cfd4
#define public_46cfd8 _public_46cfd8
#define public_46cfe4 _public_46cfe4
#define public_46cffa _public_46cffa
#define public_46d002 _public_46d002
#define public_46d00c _public_46d00c
#define public_46d013 _public_46d013
#define public_46d01b _public_46d01b
#define public_46d040 _public_46d040
#define public_46d05f _public_46d05f
#define public_46d088 _public_46d088
#define public_46d090 _public_46d090
#define public_46d0be _public_46d0be

PROC_DECLARE(0x46cfa0, internal_46cfa0, public_46cfa0);
extern "C" NAKED register_t __cdecl internal_46cfa0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        push edi
        mov esi, ecx
        call public_46e940
        mov ecx, dword ptr ds : [esi+4]
        mov ebp, eax
        mov eax, dword ptr ds : [ecx+4]
        mov ebx, ecx
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_46cfd8
        mov edi, dword ptr ds : [edi]
        public_46cfc6 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jbe public_46cfd0
        mov eax, dword ptr ds : [eax+8]
        jmp public_46cfd4
        public_46cfd0 : nop
        mov ebx, eax
        mov eax, dword ptr ds : [eax]
        public_46cfd4 : nop
        cmp eax, ecx
        jne public_46cfc6
        public_46cfd8 : nop
        xor edi, edi
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x1C], edi
        mov eax, ebx
        je public_46d01b
        public_46cfe4 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x1D]
        inc edi
        test dl, dl
        jne public_46cffa
        push ecx
        call public_46e8c0
        add esp, 4
        jmp public_46d013
        public_46cffa : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_46d00c
        public_46d002 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_46d002
        public_46d00c : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_46d013
        mov eax, ecx
        public_46d013 : nop
        cmp eax, ebp
        jne public_46cfe4
        mov dword ptr ss : [esp+0x1C], edi
        public_46d01b : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_46d088
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx]
        jne public_46d088
        cmp ebp, ecx
        jne public_46d088
        mov ebx, dword ptr ds : [ecx+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_46d05f
        lea ecx, ds:[ecx]
        public_46d040 : nop
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
        jne public_46d040
        public_46d05f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_46d088 : nop
        cmp ebx, ebp
        je public_46d0be
        lea esp, ss:[esp]
        public_46d090 : nop
        lea ecx, ss:[esp+0x10]
        mov edi, eax
        call public_46e970
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_46dba0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        jne public_46d090
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_46d0be : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x46cfa0)
    }
}

#undef public_46cfc6
#undef public_46cfd0
#undef public_46cfd4
#undef public_46cfd8
#undef public_46cfe4
#undef public_46cffa
#undef public_46d002
#undef public_46d00c
#undef public_46d013
#undef public_46d01b
#undef public_46d040
#undef public_46d05f
#undef public_46d088
#undef public_46d090
#undef public_46d0be
