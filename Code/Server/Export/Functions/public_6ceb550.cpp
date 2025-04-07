#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ceef70);
CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6ceb571 _public_6ceb571
#define public_6ceb573 _public_6ceb573
#define public_6ceb672 _public_6ceb672
#define public_6ceb6a4 _public_6ceb6a4
#define public_6ceb6a6 _public_6ceb6a6
#define public_6ceb6c6 _public_6ceb6c6
#define public_6ceb6c8 _public_6ceb6c8
#define public_6ceb6e0 _public_6ceb6e0
#define public_6ceb742 _public_6ceb742
#define public_6ceb77f _public_6ceb77f
#define public_6ceb78b _public_6ceb78b
#define public_6ceb78f _public_6ceb78f

PROC_DECLARE(0x6ceb550, internal_6ceb550, public_6ceb550);
extern "C" NAKED register_t __cdecl internal_6ceb550()
{
    __asm
    {
        sub esp, 0x50
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0x10]
        xor ebp, ebp
        cmp ebx, ebp
        je public_6ceb571
        mov eax, dword ptr ds : [ebx+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        je public_6ceb573
        public_6ceb571 : nop
        xor ebx, ebx
        public_6ceb573 : nop
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        call public_6d06cd0
        mov esi, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x2C], eax
        call dword ptr ds : [public_6d641f4]
        mov esi, dword ptr ss : [esp+0x68]
        fsub dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x18]
        push eax
        push 0xD
        fstp dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [ebx+0x88]
        fld dword ptr ss : [esp+0x38]
        fdiv dword ptr ds : [ecx+0x1C]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ebx+0x88]
        fdiv dword ptr ds : [edx+0x1C]
        fstp dword ptr ss : [esp+0x40]
        call public_6d43650
        add esp, 8
        mov ecx, ebx
        call dword ptr ds : [public_6d6422c]
        cmp eax, ebp
        je public_6ceb672
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x44], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x50], edx
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x54], ecx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x58], edx
        mov dword ptr ss : [esp+0x5C], ecx
        lea edx, ss:[esp+0x3C]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x4C], ebp
        mov dword ptr ss : [esp+0x50], ebp
        mov dword ptr ss : [esp+0x14], ebp
        call dword ptr ds : [edx]
        public_6ceb672 : nop
        mov ecx, ebx
        call dword ptr ds : [public_6d641f4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 0x44
        jnp public_6ceb78f
        mov eax, dword ptr ds : [edi+0x10]
        cmp eax, ebp
        je public_6ceb6a4
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_6ceb6a4
        mov ecx, eax
        jmp public_6ceb6a6
        public_6ceb6a4 : nop
        xor ecx, ecx
        public_6ceb6a6 : nop
        cmp eax, ebp
        mov ecx, dword ptr ds : [ecx+0x88]
        mov edx, dword ptr ds : [ecx+0x78]
        mov esi, dword ptr ds : [edx]
        je public_6ceb6c6
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ceb6c8
        public_6ceb6c6 : nop
        xor eax, eax
        public_6ceb6c8 : nop
        mov edx, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [edx+0x78]
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_6ceb78b
        lea ecx, ds:[ecx]
        public_6ceb6e0 : nop
        mov ecx, ebx
        call dword ptr ds : [public_6d641f4]
        mov ebp, dword ptr ss : [esp+0x68]
        fcomp dword ptr ss : [ebp+4]
        fnstsw ax
        test ah, 0x41
        jne public_6ceb742
        mov ecx, ebx
        call dword ptr ds : [public_6d641f4]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_6ceb77f
        fld dword ptr ds : [esi+0x10]
        fcomp dword ptr ss : [ebp+4]
        fnstsw ax
        test ah, 1
        jne public_6ceb77f
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [public_6d6401c]
        mov eax, dword ptr ds : [edi]
        push 0xBF800000
        push ecx
        xor ecx, ecx
        mov cx, word ptr ds : [edx]
        lea edx, ds:[esi+8]
        push ecx
        mov ecx, dword ptr ss : [esp+0x70]
        push edx
        mov edx, dword ptr ds : [ecx+0x14]
        push edx
        mov ecx, edi
        call dword ptr ds : [eax+0x1E4]
        jmp public_6ceb77f
        public_6ceb742 : nop
        fld dword ptr ds : [esi+0x10]
        fcomp dword ptr ss : [ebp+4]
        fnstsw ax
        test ah, 5
        jp public_6ceb77f
        mov ecx, ebx
        call dword ptr ds : [public_6d641f4]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x41
        jp public_6ceb77f
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [public_6d6401c]
        mov eax, dword ptr ds : [edi]
        push ecx
        xor ecx, ecx
        mov cx, word ptr ds : [edx]
        lea edx, ds:[esi+8]
        push ecx
        push edx
        mov ecx, edi
        call dword ptr ds : [eax+0x1E8]
        public_6ceb77f : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x10]
        jne public_6ceb6e0
        public_6ceb78b : nop
        mov esi, dword ptr ss : [esp+0x68]
        public_6ceb78f : nop
        push esi
        mov ecx, edi
        call public_6ceef70
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x6ceb550)
    }
}

#undef public_6ceb571
#undef public_6ceb573
#undef public_6ceb672
#undef public_6ceb6a4
#undef public_6ceb6a6
#undef public_6ceb6c6
#undef public_6ceb6c8
#undef public_6ceb6e0
#undef public_6ceb742
#undef public_6ceb77f
#undef public_6ceb78b
#undef public_6ceb78f
