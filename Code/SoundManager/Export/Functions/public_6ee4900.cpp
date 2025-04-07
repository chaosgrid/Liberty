#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee4800);
CLANG_FORWARD_PROC_SYMBOL(public_6ee4900);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7580);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6ee85e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8ddc);

#define public_6ee4927 _public_6ee4927
#define public_6ee4940 _public_6ee4940
#define public_6ee498f _public_6ee498f
#define public_6ee49b0 _public_6ee49b0
#define public_6ee49e0 _public_6ee49e0
#define public_6ee49e9 _public_6ee49e9
#define public_6ee49fc _public_6ee49fc
#define public_6ee4a24 _public_6ee4a24
#define public_6ee4a3a _public_6ee4a3a
#define public_6ee4a50 _public_6ee4a50
#define public_6ee4a66 _public_6ee4a66
#define public_6ee4a76 _public_6ee4a76

PROC_DECLARE(0x6ee4900, internal_6ee4900, public_6ee4900);
extern "C" NAKED register_t __cdecl internal_6ee4900()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6eeaf6c]
        sub esp, 8
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        push esi
        je public_6ee4927
        push eax
        mov dword ptr ds : [public_6eeaf74], 1
        call dword ptr ds : [public_6ee9034]
        mov dword ptr ds : [public_6eeaf6c], ebx
        public_6ee4927 : nop
        cmp dword ptr ds : [public_6eeaf08], ebx
        push ebp
        push edi
        je public_6ee498f
        mov ebp, dword ptr ds : [public_6eeaf04]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6ee498f
        mov edi, edi
        public_6ee4940 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6ee7580
        mov esi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        push ebx
        lea ecx, ds:[esi+8]
        call public_6ee85e0
        push 1
        push esi
        mov ecx, offset public_6eeaf00
        call public_6ee7d10
        mov ecx, dword ptr ds : [public_6eeaf08]
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [public_6eeaf08], ecx
        jne public_6ee4940
        public_6ee498f : nop
        mov esi, dword ptr ss : [esp+0x1C]
        cmp dword ptr ds : [esi+0x114], ebx
        je public_6ee49fc
        mov ebp, dword ptr ds : [esi+0x110]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6ee49fc
        mov ebx, 0x7FFFFFFF
        lea ecx, ds:[ecx]
        public_6ee49b0 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edx+4], ecx
        cmp dword ptr ds : [public_6eeaf58], ebx
        jge public_6ee49e0
        mov edx, dword ptr ds : [public_6eeaf4c]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [public_6eeaf4c], eax
        inc dword ptr ds : [public_6eeaf58]
        jmp public_6ee49e9
        public_6ee49e0 : nop
        push eax
        call public_6ee8ddc
        add esp, 4
        public_6ee49e9 : nop
        mov ecx, dword ptr ds : [esi+0x114]
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [esi+0x114], ecx
        jne public_6ee49b0
        xor ebx, ebx
        public_6ee49fc : nop
        mov ecx, esi
        call public_6ee4800
        test byte ptr ds : [esi+0x90], 4
        pop edi
        pop ebp
        je public_6ee4a24
        mov ecx, dword ptr ds : [esi+0x6C]
        mov edx, dword ptr ds : [esi+0x70]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, dword ptr ds : [esi+0x74]
        push edx
        mov edx, dword ptr ds : [esi+0x68]
        push ecx
        push edx
        push esi
        call dword ptr ds : [eax+0x2C]
        public_6ee4a24 : nop
        mov eax, dword ptr ds : [esi+0x130]
        cmp eax, ebx
        je public_6ee4a3a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x130], ebx
        public_6ee4a3a : nop
        mov eax, dword ptr ds : [esi+0x128]
        cmp eax, ebx
        je public_6ee4a50
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x128], ebx
        public_6ee4a50 : nop
        mov eax, dword ptr ds : [esi+0x12C]
        cmp eax, ebx
        je public_6ee4a66
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x12C], ebx
        public_6ee4a66 : nop
        mov al, byte ptr ds : [esi+0x138]
        test al, al
        je public_6ee4a76
        call dword ptr ds : [public_6ee90c8]
        public_6ee4a76 : nop
        mov byte ptr ds : [esi+0x138], 0
        pop esi
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6ee4900)
    }
}

#undef public_6ee4927
#undef public_6ee4940
#undef public_6ee498f
#undef public_6ee49b0
#undef public_6ee49e0
#undef public_6ee49e9
#undef public_6ee49fc
#undef public_6ee4a24
#undef public_6ee4a3a
#undef public_6ee4a50
#undef public_6ee4a66
#undef public_6ee4a76
