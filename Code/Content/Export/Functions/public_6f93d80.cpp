#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f93d80);

#define public_6f93da4 _public_6f93da4
#define public_6f93db2 _public_6f93db2
#define public_6f93dca _public_6f93dca
#define public_6f93df0 _public_6f93df0
#define public_6f93e1c _public_6f93e1c
#define public_6f93e34 _public_6f93e34
#define public_6f93e4d _public_6f93e4d
#define public_6f93ea0 _public_6f93ea0
#define public_6f93eb6 _public_6f93eb6
#define public_6f93ec0 _public_6f93ec0
#define public_6f93ede _public_6f93ede
#define public_6f93ee4 _public_6f93ee4
#define public_6f93efe _public_6f93efe
#define public_6f93f63 _public_6f93f63

PROC_DECLARE(0x6f93d80, internal_6f93d80, public_6f93d80);
extern "C" NAKED register_t __cdecl internal_6f93d80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        cmp ebx, eax
        mov eax, dword ptr ss : [esp+0x20]
        je public_6f93f63
        push ebp
        push esi
        push edi
        add ebx, 4
        lea ebp, ds:[eax+0xA8]
        public_6f93da4 : nop
        test ebx, ebx
        jne public_6f93db2
        mov dword ptr ds : [eax], ebx
        mov byte ptr ss : [ebp-0xA4], bl
        jmp public_6f93df0
        public_6f93db2 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f93dca
        mov eax, 0x2F
        public_6f93dca : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[ebp-0xA4]
        mov esi, ebx
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x2C]
        mov byte ptr ds : [eax+ebp-0xA4], 0
        mov dword ptr ds : [ecx], eax
        public_6f93df0 : nop
        mov edx, dword ptr ds : [ebx+0x30]
        mov dword ptr ss : [ebp-0x74], edx
        mov eax, dword ptr ds : [ebx+0x34]
        lea esi, ds:[ebx+0x38]
        lea edi, ss:[ebp-0x6C]
        mov ecx, 0x1A
        mov dword ptr ss : [ebp-0x70], eax
        rep movsd
        lea esi, ds:[ebx+0xA4]
        test esi, esi
        jne public_6f93e1c
        mov dword ptr ss : [ebp-4], esi
        mov byte ptr ss : [ebp], 0
        jmp public_6f93e4d
        public_6f93e1c : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f93e34
        mov eax, 0x2F
        public_6f93e34 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp], 0
        mov dword ptr ss : [ebp-4], eax
        public_6f93e4d : nop
        lea eax, ds:[ebx+0xD4]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x30]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov cl, byte ptr ds : [ebx+0xE0]
        mov byte ptr ss : [ebp+0x3C], cl
        mov edx, dword ptr ds : [ebx+0xE4]
        lea eax, ss:[ebp+0x44]
        lea ecx, ds:[ebx+0xE8]
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x40], edx
        je public_6f93efe
        mov esi, dword ptr ss : [ebp+0x48]
        mov edx, dword ptr ds : [ebx+0xEC]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f93eb6
        mov edi, edi
        public_6f93ea0 : nop
        cmp ecx, edx
        je public_6f93eb6
        mov edi, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6f93ea0
        public_6f93eb6 : nop
        cmp eax, esi
        mov edi, eax
        je public_6f93ede
        lea esp, ss:[esp]
        public_6f93ec0 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[ebp+0x44]
        call public_6ecfe80
        cmp edi, esi
        jne public_6f93ec0
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f93ede : nop
        cmp ecx, edx
        mov edi, ecx
        je public_6f93efe
        public_6f93ee4 : nop
        lea eax, ds:[edi+8]
        push eax
        push esi
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[ebp+0x44]
        call public_6f1e390
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [esp+0x14]
        jne public_6f93ee4
        public_6f93efe : nop
        mov dx, word ptr ds : [ebx+0xF4]
        mov word ptr ss : [ebp+0x50], dx
        mov al, byte ptr ds : [ebx+0xF6]
        mov byte ptr ss : [ebp+0x52], al
        mov ecx, dword ptr ds : [ebx+0xF8]
        mov dword ptr ss : [ebp+0x54], ecx
        mov edx, dword ptr ds : [ebx+0xFC]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [ebp+0x58], edx
        mov eax, dword ptr ds : [ebx+0x100]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [ebp+0x5C], eax
        mov eax, dword ptr ss : [esp+0x2C]
        add ecx, 0x108
        add eax, 0x108
        add ebp, 0x108
        add ebx, 0x108
        cmp ecx, edx
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x24], ecx
        jne public_6f93da4
        pop edi
        pop esi
        pop ebp
        public_6f93f63 : nop
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f93d80)
    }
}

#undef public_6f93da4
#undef public_6f93db2
#undef public_6f93dca
#undef public_6f93df0
#undef public_6f93e1c
#undef public_6f93e34
#undef public_6f93e4d
#undef public_6f93ea0
#undef public_6f93eb6
#undef public_6f93ec0
#undef public_6f93ede
#undef public_6f93ee4
#undef public_6f93efe
#undef public_6f93f63
