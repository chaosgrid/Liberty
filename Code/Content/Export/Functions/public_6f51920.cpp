#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f51920);
CLANG_FORWARD_PROC_SYMBOL(public_6f52720);
CLANG_FORWARD_PROC_SYMBOL(public_6f52ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55310);

#define public_6f5194e _public_6f5194e
#define public_6f51963 _public_6f51963
#define public_6f51996 _public_6f51996
#define public_6f519a2 _public_6f519a2
#define public_6f519b8 _public_6f519b8
#define public_6f519ca _public_6f519ca
#define public_6f519f0 _public_6f519f0
#define public_6f51a32 _public_6f51a32
#define public_6f51a4c _public_6f51a4c
#define public_6f51a79 _public_6f51a79
#define public_6f51a85 _public_6f51a85
#define public_6f51ab0 _public_6f51ab0
#define public_6f51ac2 _public_6f51ac2
#define public_6f51b10 _public_6f51b10
#define public_6f51b2c _public_6f51b2c
#define public_6f51b2f _public_6f51b2f
#define public_6f51b47 _public_6f51b47
#define public_6f51b6c _public_6f51b6c

PROC_DECLARE(0x6f51920, internal_6f51920, public_6f51920);
extern "C" NAKED register_t __cdecl internal_6f51920()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x40]
        mov eax, dword ptr ds : [edi+0xC8]
        lea ebx, ds:[edi+0xC4]
        lea ebp, ds:[esi+esi*4]
        shl ebp, 2
        test eax, eax
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x14], esi
        jne public_6f5194e
        xor edx, edx
        jmp public_6f51963
        public_6f5194e : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f51963 : nop
        cmp edx, ebp
        jae public_6f51a85
        mov dword ptr ss : [esp+0x10], 0
        call dword ptr ds : [public_6fb3370]
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test esi, esi
        mov dword ptr ss : [esp+0x18], eax
        jle public_6f51a4c
        jmp public_6f519a2
        public_6f51996 : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x20]
        public_6f519a2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        add eax, ecx
        cdq 
        idiv esi
        mov ecx, dword ptr ds : [edi+0x48]
        mov eax, dword ptr ds : [ecx+4]
        sub eax, dword ptr ds : [ecx]
        inc eax
        cmp eax, edx
        ja public_6f519ca
        public_6f519b8 : nop
        mov ebp, dword ptr ds : [ecx+8]
        add ecx, 8
        sub edx, eax
        mov eax, dword ptr ds : [ecx+4]
        sub eax, ebp
        inc eax
        cmp eax, edx
        jbe public_6f519b8
        public_6f519ca : nop
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x38]
        add eax, edx
        mov dword ptr ds : [ecx], eax
        xor ebp, ebp
        call dword ptr ds : [public_6fb3370]
        lea eax, ds:[eax+eax*4]
        shl eax, 2
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov esi, eax
        sar esi, 0xF
        public_6f519f0 : nop
        lea eax, ds:[esi+ebp]
        cdq 
        mov ecx, 0x14
        idiv ecx
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x30], 1
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x2C], edx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x2C], eax
        call public_6f53ab0
        cmp eax, edi
        je public_6f51a32
        mov eax, ebp
        inc ebp
        cmp eax, 0x14
        jl public_6f519f0
        public_6f51a32 : nop
        cmp ebp, 0x14
        jne public_6f51a4c
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jl public_6f51996
        public_6f51a4c : nop
        mov al, byte ptr ss : [esp+0x40]
        test al, al
        je public_6f51a79
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], edx
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x28], ecx
        push eax
        mov ecx, ebx
        call public_6f52720
        public_6f51a79 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x24
        ret 0xC
        public_6f51a85 : nop
        mov ebp, dword ptr ds : [public_6fb3370]
        call ebp
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov edx, dword ptr ds : [edi+0x48]
        mov ecx, dword ptr ds : [edx+4]
        sub ecx, dword ptr ds : [edx]
        sar eax, 0xF
        inc ecx
        cmp ecx, eax
        ja public_6f51ac2
        lea esp, ss:[esp]
        public_6f51ab0 : nop
        mov esi, dword ptr ds : [edx+8]
        add edx, 8
        sub eax, ecx
        mov ecx, dword ptr ds : [edx+4]
        sub ecx, esi
        inc ecx
        cmp ecx, eax
        jbe public_6f51ab0
        public_6f51ac2 : nop
        mov ecx, dword ptr ds : [edx]
        mov esi, dword ptr ss : [esp+0x38]
        add ecx, eax
        mov dword ptr ds : [esi], ecx
        call ebp
        lea eax, ds:[eax+eax*4]
        shl eax, 2
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov edx, dword ptr ss : [esp+0x3C]
        mov edi, eax
        mov al, byte ptr ss : [esp+0x40]
        sar edi, 0xF
        test al, al
        mov dword ptr ds : [edx], edi
        je public_6f51b6c
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x28], esi
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, eax
        mov dword ptr ss : [esp+0x30], 1
        mov dword ptr ss : [esp+0x2C], edi
        je public_6f51b2c
        public_6f51b10 : nop
        lea eax, ss:[esp+0x28]
        push eax
        push esi
        call public_6f55310
        add esp, 8
        test al, al
        jne public_6f51b2f
        mov eax, dword ptr ds : [ebx+8]
        add esi, 0xC
        cmp esi, eax
        jne public_6f51b10
        public_6f51b2c : nop
        mov esi, dword ptr ds : [ebx+8]
        public_6f51b2f : nop
        cmp esi, dword ptr ds : [ebx+8]
        je public_6f51b47
        mov eax, dword ptr ds : [esi+8]
        inc eax
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x24
        ret 0xC
        public_6f51b47 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x2C], ecx
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x38], 1
        mov dword ptr ss : [esp+0x34], edi
        call public_6f52ff0
        public_6f51b6c : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x24
        ret 0xC
        UNREACHABLE_TRAP(0x6f51920)
    }
}

#undef public_6f5194e
#undef public_6f51963
#undef public_6f51996
#undef public_6f519a2
#undef public_6f519b8
#undef public_6f519ca
#undef public_6f519f0
#undef public_6f51a32
#undef public_6f51a4c
#undef public_6f51a79
#undef public_6f51a85
#undef public_6f51ab0
#undef public_6f51ac2
#undef public_6f51b10
#undef public_6f51b2c
#undef public_6f51b2f
#undef public_6f51b47
#undef public_6f51b6c
