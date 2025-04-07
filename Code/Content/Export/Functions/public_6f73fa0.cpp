#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f34670);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f73bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafff0);

#define public_6f74005 _public_6f74005
#define public_6f74010 _public_6f74010
#define public_6f74054 _public_6f74054
#define public_6f740b4 _public_6f740b4
#define public_6f74111 _public_6f74111
#define public_6f74142 _public_6f74142
#define public_6f7414f _public_6f7414f
#define public_6f74179 _public_6f74179
#define public_6f741b6 _public_6f741b6
#define public_6f741f1 _public_6f741f1
#define public_6f7421e _public_6f7421e
#define public_6f7422b _public_6f7422b
#define public_6f7423a _public_6f7423a
#define public_6f74240 _public_6f74240
#define public_6f74269 _public_6f74269
#define public_6f7427b _public_6f7427b
#define public_6f74292 _public_6f74292
#define public_6f742a0 _public_6f742a0
#define public_6f742b2 _public_6f742b2
#define public_6f742c6 _public_6f742c6
#define public_6f742ed _public_6f742ed
#define public_6f742fa _public_6f742fa

PROC_DECLARE(0x6f73fa0, internal_6f73fa0, public_6f73fa0);
extern "C" NAKED register_t __cdecl internal_6f73fa0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fafff0 @0x6f73fa8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafff0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xE4]
        push esi
        xor esi, esi
        cmp eax, esi
        je public_6f742fa
        mov al, byte ptr ss : [esp+0x60]
        push ebx
        push esi
        push esi
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x40], al
        call public_6f93790
        mov ecx, eax
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x40], esi
        mov eax, dword ptr ss : [ebp+0xE0]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x5C], esi
        mov dword ptr ss : [esp+0x14], ebx
        je public_6f74292
        push edi
        jmp public_6f74010
        public_6f74005 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_6f74010 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x14], ecx
        mov eax, dword ptr ds : [ecx+0x14C]
        test eax, eax
        je public_6f74054
        mov eax, dword ptr ds : [ecx+0x154]
        cmp eax, 0xFFFFFFFF
        je public_6f74054
        fld dword ptr ds : [ecx+0x1C8]
        fcomp dword ptr ds : [ecx+0x1BC]
        fnstsw ax
        test ah, 5
        jp public_6f7427b
        mov edx, dword ptr ds : [ecx+0x1BC]
        mov dword ptr ds : [ecx+0x1C8], edx
        jmp public_6f7427b
        public_6f74054 : nop
        fld dword ptr ds : [ecx+0x1BC]
        fcomp dword ptr ds : [public_6fbbee0]
        fnstsw ax
        test ah, 0x44
        jnp public_6f7427b
        push ecx
        mov ecx, ebp
        call public_6f73bf0
        fmul dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 5
        jp public_6f740b4
        fld dword ptr ds : [ecx+0x1C8]
        fcomp dword ptr ds : [ecx+0x1BC]
        fnstsw ax
        test ah, 5
        jp public_6f7427b
        mov eax, dword ptr ds : [ecx+0x1BC]
        mov dword ptr ds : [ecx+0x1C8], eax
        jmp public_6f7427b
        public_6f740b4 : nop
        fld dword ptr ds : [ecx+0x1C8]
        add ecx, 0x1C8
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 1
        jne public_6f7427b
        fld dword ptr ds : [ecx]
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 5
        jp public_6f7427b
        mov dword ptr ds : [ecx], 0
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6f7414f
        mov esi, dword ptr ss : [ebp+0xBC]
        cmp esi, dword ptr ss : [ebp+0xC0]
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [edx+4]
        je public_6f7414f
        public_6f74111 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_6f74142
        mov eax, ecx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x20], eax
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        call dword ptr ds : [public_6fb34e4]
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        cmp eax, edi
        je public_6f7427b
        public_6f74142 : nop
        mov eax, dword ptr ss : [ebp+0xC0]
        add esi, 4
        cmp esi, eax
        jne public_6f74111
        public_6f7414f : nop
        mov edx, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [edx+0x154], 0xFFFFFFFF
        jne public_6f74179
        mov ecx, dword ptr ss : [esp+0x40]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        lea ecx, ss:[esp+0x48]
        call public_6f1e390
        jmp public_6f7427b
        public_6f74179 : nop
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x4C]
        call public_6ead6a0
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+0x154]
        push eax
        lea edx, ss:[esp+0x4C]
        push edx
        mov byte ptr ss : [esp+0x68], 1
        call public_6f66220
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x58]
        add esp, 8
        cmp eax, ecx
        mov ebx, eax
        je public_6f7423a
        public_6f741b6 : nop
        mov eax, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov dword ptr ss : [esp+0x2C], eax
        call public_6f49bc0
        add esp, 4
        test eax, eax
        jne public_6f74269
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6f7422b
        mov esi, dword ptr ss : [ebp+0xBC]
        cmp esi, dword ptr ss : [ebp+0xC0]
        mov edx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [edx+4]
        je public_6f7422b
        public_6f741f1 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_6f7421e
        mov eax, ecx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        call dword ptr ds : [public_6fb34e4]
        mov eax, dword ptr ss : [esp+0x38]
        add esp, 8
        cmp eax, edi
        je public_6f74269
        public_6f7421e : nop
        mov eax, dword ptr ss : [ebp+0xC0]
        add esi, 4
        cmp esi, eax
        jne public_6f741f1
        public_6f7422b : nop
        mov ecx, dword ptr ss : [esp+0x50]
        add ebx, 4
        cmp ebx, ecx
        jne public_6f741b6
        mov eax, dword ptr ss : [esp+0x4C]
        public_6f7423a : nop
        cmp eax, ecx
        mov esi, eax
        je public_6f74269
        public_6f74240 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x40]
        lea eax, ss:[esp+0x1C]
        push eax
        mov dword ptr ss : [esp+0x20], edx
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        lea ecx, ss:[esp+0x48]
        call public_6f1e390
        mov eax, dword ptr ss : [esp+0x50]
        add esi, 4
        cmp esi, eax
        jne public_6f74240
        public_6f74269 : nop
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x60], 0
        call public_6eec8d0
        mov ebx, dword ptr ss : [esp+0x18]
        public_6f7427b : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xE0]
        mov dword ptr ss : [esp+0x18], eax
        jne public_6f74005
        mov ecx, dword ptr ss : [esp+0x40]
        pop edi
        public_6f74292 : nop
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        pop ebx
        je public_6f742b2
        lea esp, ss:[esp]
        public_6f742a0 : nop
        mov ecx, dword ptr ds : [esi+8]
        call public_6f34670
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x38]
        cmp esi, ecx
        jne public_6f742a0
        public_6f742b2 : nop
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        mov esi, ecx
        mov dword ptr ss : [esp+0x60], eax
        je public_6f742ed
        public_6f742c6 : nop
        push 0
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x68]
        call public_6f68e30
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        lea ecx, ss:[esp+0x3C]
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x60], esi
        jne public_6f742c6
        public_6f742ed : nop
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f742fa : nop
        mov ecx, dword ptr ss : [esp+0x50]
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 4
        UNREACHABLE_TRAP(0x6f73fa0)
    }
}

#undef public_6f74005
#undef public_6f74010
#undef public_6f74054
#undef public_6f740b4
#undef public_6f74111
#undef public_6f74142
#undef public_6f7414f
#undef public_6f74179
#undef public_6f741b6
#undef public_6f741f1
#undef public_6f7421e
#undef public_6f7422b
#undef public_6f7423a
#undef public_6f74240
#undef public_6f74269
#undef public_6f7427b
#undef public_6f74292
#undef public_6f742a0
#undef public_6f742b2
#undef public_6f742c6
#undef public_6f742ed
#undef public_6f742fa
