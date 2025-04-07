#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf45a0);

#define public_6cf3f2d _public_6cf3f2d
#define public_6cf3f47 _public_6cf3f47
#define public_6cf3f49 _public_6cf3f49
#define public_6cf3f92 _public_6cf3f92
#define public_6cf3faa _public_6cf3faa
#define public_6cf3ff9 _public_6cf3ff9
#define public_6cf3ffb _public_6cf3ffb
#define public_6cf4026 _public_6cf4026
#define public_6cf4028 _public_6cf4028
#define public_6cf4079 _public_6cf4079
#define public_6cf407b _public_6cf407b
#define public_6cf409f _public_6cf409f
#define public_6cf40a1 _public_6cf40a1
#define public_6cf40bc _public_6cf40bc
#define public_6cf40dc _public_6cf40dc
#define public_6cf40f1 _public_6cf40f1
#define public_6cf40f3 _public_6cf40f3
#define public_6cf411d _public_6cf411d
#define public_6cf411f _public_6cf411f
#define public_6cf4170 _public_6cf4170
#define public_6cf4172 _public_6cf4172
#define public_6cf4196 _public_6cf4196
#define public_6cf4198 _public_6cf4198
#define public_6cf41b3 _public_6cf41b3
#define public_6cf41d3 _public_6cf41d3
#define public_6cf41e6 _public_6cf41e6
#define public_6cf41ff _public_6cf41ff
#define public_6cf420e _public_6cf420e

PROC_DECLARE(0x6cf3f10, internal_6cf3f10, public_6cf3f10);
extern "C" NAKED register_t __cdecl internal_6cf3f10()
{
    __asm
    {
        sub esp, 0x24
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        push edi
        mov ebp, ecx
        call public_6cee9e0
        test al, al
        jne public_6cf3f2d
        pop edi
        pop ebp
        add esp, 0x24
        ret 4
        public_6cf3f2d : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        push esi
        je public_6cf3f47
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0xA7
        cmp cl, 0xA7
        jne public_6cf3f47
        mov esi, eax
        jmp public_6cf3f49
        public_6cf3f47 : nop
        xor esi, esi
        public_6cf3f49 : nop
        mov eax, dword ptr ds : [public_6d64194]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        push ecx
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x50]
        fld dword ptr ds : [esi+0xE8]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 1
        jne public_6cf41ff
        mov edx, dword ptr ss : [ebp+0x74]
        push edx
        call dword ptr ds : [public_6d64460]
        add esp, 4
        test al, al
        jne public_6cf3f92
        mov eax, dword ptr ss : [ebp+0x74]
        push 1
        push eax
        call dword ptr ds : [public_6d6445c]
        add esp, 8
        jmp public_6cf3faa
        public_6cf3f92 : nop
        mov al, byte ptr ss : [ebp+0x78]
        test al, al
        je public_6cf3faa
        mov eax, dword ptr ss : [ebp+0x7C]
        mov edx, dword ptr ss : [ebp]
        push eax
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx+0x158]
        public_6cf3faa : nop
        lea ecx, ss:[ebp+0x60]
        call dword ptr ds : [public_6d64450]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ds : [public_6d6419c]
        call esi
        mov ecx, dword ptr ds : [eax+0x90]
        test ecx, ecx
        je public_6cf420e
        mov ecx, dword ptr ss : [ebp+0x10]
        call esi
        mov eax, dword ptr ds : [eax+0x90]
        sub eax, 2
        jne public_6cf420e
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_6cf3ff9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0xA7
        cmp cl, 0xA7
        jne public_6cf3ff9
        mov ecx, eax
        jmp public_6cf3ffb
        public_6cf3ff9 : nop
        xor ecx, ecx
        public_6cf3ffb : nop
        mov ecx, dword ptr ds : [ecx+0xF0]
        test ecx, ecx
        je public_6cf420e
        add ecx, 0xFFFFFFF8
        test ecx, ecx
        je public_6cf420e
        test eax, eax
        je public_6cf4026
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0xA7
        cmp dl, 0xA7
        je public_6cf4028
        public_6cf4026 : nop
        xor eax, eax
        public_6cf4028 : nop
        mov eax, dword ptr ds : [eax+0xF0]
        test eax, eax
        je public_6cf40dc
        lea esi, ds:[eax-8]
        test esi, esi
        je public_6cf40dc
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_6cf40bc
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_6cf40bc
        mov edx, dword ptr ss : [ebp+0x10]
        test edx, edx
        je public_6cf4079
        mov ecx, dword ptr ds : [edx+0x4C]
        and ecx, 0xA7
        cmp cl, 0xA7
        jne public_6cf4079
        mov edi, edx
        jmp public_6cf407b
        public_6cf4079 : nop
        xor edi, edi
        public_6cf407b : nop
        mov ecx, dword ptr ds : [public_6d6402c]
        mov cx, word ptr ds : [ecx]
        cmp cx, word ptr ds : [edi+0xF8]
        je public_6cf40bc
        test edx, edx
        je public_6cf409f
        mov ecx, dword ptr ds : [edx+0x4C]
        and ecx, 0xA7
        cmp cl, 0xA7
        je public_6cf40a1
        public_6cf409f : nop
        xor edx, edx
        public_6cf40a1 : nop
        mov dx, word ptr ds : [edx+0xF8]
        mov edi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, eax
        push edx
        call dword ptr ds : [edi+0xE0]
        test al, al
        jne public_6cf40dc
        public_6cf40bc : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x18]
        mov ecx, esi
        push eax
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], eax
        public_6cf40dc : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_6cf40f1
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0xA7
        cmp cl, 0xA7
        je public_6cf40f3
        public_6cf40f1 : nop
        xor eax, eax
        public_6cf40f3 : nop
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, eax
        call dword ptr ds : [public_6d64468]
        test al, al
        je public_6cf41e6
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_6cf411d
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0xA7
        cmp cl, 0xA7
        je public_6cf411f
        public_6cf411d : nop
        xor eax, eax
        public_6cf411f : nop
        mov eax, dword ptr ds : [eax+0xF0]
        test eax, eax
        je public_6cf41d3
        lea esi, ds:[eax-8]
        test esi, esi
        je public_6cf41d3
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_6cf41b3
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_6cf41b3
        mov edx, dword ptr ss : [ebp+0x10]
        test edx, edx
        je public_6cf4170
        mov ecx, dword ptr ds : [edx+0x4C]
        and ecx, 0xA7
        cmp cl, 0xA7
        jne public_6cf4170
        mov edi, edx
        jmp public_6cf4172
        public_6cf4170 : nop
        xor edi, edi
        public_6cf4172 : nop
        mov ecx, dword ptr ds : [public_6d6402c]
        mov cx, word ptr ds : [ecx]
        cmp cx, word ptr ds : [edi+0xF8]
        je public_6cf41b3
        test edx, edx
        je public_6cf4196
        mov ecx, dword ptr ds : [edx+0x4C]
        and ecx, 0xA7
        cmp cl, 0xA7
        je public_6cf4198
        public_6cf4196 : nop
        xor edx, edx
        public_6cf4198 : nop
        mov dx, word ptr ds : [edx+0xF8]
        mov edi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, eax
        push edx
        call dword ptr ds : [edi+0xDC]
        test al, al
        jne public_6cf41d3
        public_6cf41b3 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x24]
        mov ecx, esi
        push eax
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], eax
        public_6cf41d3 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, ebp
        call public_6cf45a0
        jmp public_6cf420e
        public_6cf41e6 : nop
        mov edx, dword ptr ds : [public_6d6402c]
        movzx edx, word ptr ds : [edx]
        mov eax, dword ptr ss : [ebp+4]
        push 0
        lea ecx, ss:[ebp+4]
        push edx
        push 0
        call dword ptr ds : [eax+0x48]
        jmp public_6cf420e
        public_6cf41ff : nop
        mov eax, dword ptr ss : [ebp]
        push 0
        push 1
        mov ecx, ebp
        call dword ptr ds : [eax+0x158]
        public_6cf420e : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x160]
        neg al
        pop esi
        pop edi
        pop ebp
        sbb eax, eax
        inc eax
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6cf3f10)
    }
}

#undef public_6cf3f2d
#undef public_6cf3f47
#undef public_6cf3f49
#undef public_6cf3f92
#undef public_6cf3faa
#undef public_6cf3ff9
#undef public_6cf3ffb
#undef public_6cf4026
#undef public_6cf4028
#undef public_6cf4079
#undef public_6cf407b
#undef public_6cf409f
#undef public_6cf40a1
#undef public_6cf40bc
#undef public_6cf40dc
#undef public_6cf40f1
#undef public_6cf40f3
#undef public_6cf411d
#undef public_6cf411f
#undef public_6cf4170
#undef public_6cf4172
#undef public_6cf4196
#undef public_6cf4198
#undef public_6cf41b3
#undef public_6cf41d3
#undef public_6cf41e6
#undef public_6cf41ff
#undef public_6cf420e
