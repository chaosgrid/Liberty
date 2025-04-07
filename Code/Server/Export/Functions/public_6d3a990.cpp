#include "Server-PCH.h"


#define public_6d3a9f7 _public_6d3a9f7
#define public_6d3aa0f _public_6d3aa0f
#define public_6d3aa1e _public_6d3aa1e
#define public_6d3aa24 _public_6d3aa24
#define public_6d3aa28 _public_6d3aa28
#define public_6d3aa44 _public_6d3aa44
#define public_6d3aa48 _public_6d3aa48
#define public_6d3aa4c _public_6d3aa4c
#define public_6d3aa51 _public_6d3aa51
#define public_6d3aa6a _public_6d3aa6a
#define public_6d3aa7d _public_6d3aa7d
#define public_6d3aa8b _public_6d3aa8b
#define public_6d3aa97 _public_6d3aa97

PROC_DECLARE(0x6d3a990, internal_6d3a990, public_6d3a990);
extern "C" NAKED register_t __cdecl internal_6d3a990()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        xor ebp, ebp
        cmp ecx, ebp
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebx, eax
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x10], ebp
        je public_6d3aa4c
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x20]
        push edx
        push edi
        call dword ptr ds : [eax+0x24]
        test al, al
        je public_6d3aa44
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, eax
        sub ecx, ebx
        sar ecx, 1
        neg ecx
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6d3aa1e
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d3a9f7
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 8
        ret 8
        public_6d3a9f7 : nop
        mov cl, byte ptr ds : [edi+0x1C]
        test cl, cl
        je public_6d3aa0f
        cmp dword ptr ds : [edi+8], eax
        jne public_6d3aa0f
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_6d3aa0f : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d3aa1e : nop
        mov ebp, dword ptr ss : [esp+0x10]
        jmp public_6d3aa28
        public_6d3aa24 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_6d3aa28 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        inc ebp
        cmp ebp, ecx
        jae public_6d3aa4c
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x20]
        push edx
        push edi
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_6d3aa24
        jmp public_6d3aa48
        public_6d3aa44 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d3aa48 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_6d3aa4c : nop
        cmp dword ptr ds : [esi+0xC], ebp
        ja public_6d3aa97
        public_6d3aa51 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d3aa7d
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        jne public_6d3aa8b
        mov eax, dword ptr ss : [esp+0x20]
        public_6d3aa6a : nop
        cmp dword ptr ds : [esi+0xC], ebp
        je public_6d3aa97
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ds:[eax+ecx*2]
        dec ebp
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6d3aa51
        public_6d3aa7d : nop
        mov cl, byte ptr ds : [edi+0x1C]
        test cl, cl
        je public_6d3aa8b
        cmp dword ptr ds : [edi+8], eax
        jne public_6d3aa8b
        jmp public_6d3aa6a
        public_6d3aa8b : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d3aa97 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d3a990)
    }
}

#undef public_6d3a9f7
#undef public_6d3aa0f
#undef public_6d3aa1e
#undef public_6d3aa24
#undef public_6d3aa28
#undef public_6d3aa44
#undef public_6d3aa48
#undef public_6d3aa4c
#undef public_6d3aa51
#undef public_6d3aa6a
#undef public_6d3aa7d
#undef public_6d3aa8b
#undef public_6d3aa97
