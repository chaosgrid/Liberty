#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a31c0 _public_62a31c0
#define public_62a31d2 _public_62a31d2
#define public_62a31d8 _public_62a31d8
#define public_62a3207 _public_62a3207
#define public_62a3210 _public_62a3210
#define public_62a3225 _public_62a3225
#define public_62a323c _public_62a323c
#define public_62a3251 _public_62a3251
#define public_62a3255 _public_62a3255

PROC_DECLARE(0x62a3150, internal_62a3150, public_62a3150);
extern "C" NAKED register_t __cdecl internal_62a3150()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [eax+8]
        push ebx
        mov dword ptr ds : [edx+8], ecx
        push ebp
        push esi
        push edi
        lea esi, ds:[eax+0xC]
        lea edi, ds:[edx+0xC]
        mov ecx, 9
        rep movsd
        lea ecx, ds:[eax+0x30]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[edx+0x30]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [eax+0x3C]
        mov dword ptr ds : [edx+0x3C], ecx
        mov ecx, dword ptr ds : [eax+0x40]
        mov dword ptr ds : [edx+0x40], ecx
        lea ecx, ds:[eax+0x44]
        lea ebp, ds:[edx+0x44]
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x14], edx
        je public_62a3255
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_62a31d2
        public_62a31c0 : nop
        cmp ebx, ecx
        je public_62a31d2
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_62a31c0
        public_62a31d2 : nop
        cmp eax, esi
        mov edi, eax
        je public_62a3207
        public_62a31d8 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6391d5a
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_62a31d8
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        public_62a3207 : nop
        cmp ebx, ecx
        je public_62a3251
        nop 
        lea esp, ss:[esp]
        public_62a3210 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_62a3225
        mov edi, eax
        public_62a3225 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_62a323c
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], ecx
        public_62a323c : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x10]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_62a3210
        mov edx, dword ptr ss : [esp+0x14]
        public_62a3251 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_62a3255 : nop
        mov ecx, dword ptr ds : [eax+0x50]
        pop edi
        pop esi
        mov dword ptr ds : [edx+0x50], ecx
        mov al, byte ptr ds : [eax+0x54]
        pop ebp
        mov byte ptr ds : [edx+0x54], al
        mov eax, edx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62a3150)
    }
}

#undef public_62a31c0
#undef public_62a31d2
#undef public_62a31d8
#undef public_62a3207
#undef public_62a3210
#undef public_62a3225
#undef public_62a323c
#undef public_62a3251
#undef public_62a3255
