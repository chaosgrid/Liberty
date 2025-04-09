#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406880);
CLANG_FORWARD_PROC_SYMBOL(public_40f130);
CLANG_FORWARD_PROC_SYMBOL(public_4122a0);
CLANG_FORWARD_PROC_SYMBOL(public_4fd560);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4f8e54 _public_4f8e54
#define public_4f8e78 _public_4f8e78
#define public_4f8e7b _public_4f8e7b
#define public_4f8ef4 _public_4f8ef4
#define public_4f8ef6 _public_4f8ef6
#define public_4f8f19 _public_4f8f19
#define public_4f8f23 _public_4f8f23
#define public_4f8f5e _public_4f8f5e
#define public_4f8f61 _public_4f8f61
#define public_4f8f66 _public_4f8f66
#define public_4f8f69 _public_4f8f69
#define public_4f8fab _public_4f8fab
#define public_4f8fc1 _public_4f8fc1

PROC_DECLARE(0x4f8e10, internal_4f8e10, public_4f8e10);
extern "C" NAKED register_t __cdecl internal_4f8e10()
{
    __asm
    {
        sub esp, 0x70
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x44]
        test eax, eax
        push esi
        push edi
        je public_4f8e78
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4f8e78
        mov ecx, dword ptr ds : [ebx+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4f8e78
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_674f50]
        test eax, eax
        jne public_4f8e54
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4f8e54 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x10]
        push edx
        push esi
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x50]
        call public_406880
        lea esi, ss:[esp+0x4C]
        jmp public_4f8e7b
        public_4f8e78 : nop
        lea esi, ds:[ebx+0x10]
        public_4f8e7b : nop
        lea edi, ss:[esp+0x1C]
        mov ecx, 0xC
        rep movsd
        call public_40f130
        test eax, eax
        mov dword ptr ds : [ebx+0x74], eax
        je public_4f8f23
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x40]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x44]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x48]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fsub dword ptr ds : [public_5d9a7c]
        fld dword ptr ds : [public_5d9a78]
        fsub dword ptr ds : [public_5d9a7c]
        fdivp 
        fst dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_4f8ef4
        mov eax, 1
        jmp public_4f8ef6
        public_4f8ef4 : nop
        xor eax, eax
        public_4f8ef6 : nop
        test al, al
        mov byte ptr ds : [ebx+0x70], al
        jne public_4f8f23
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_4f8f19
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x70
        ret 4
        public_4f8f19 : nop
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [ebx+0x6C]
        fstp dword ptr ds : [ebx+0x6C]
        public_4f8f23 : nop
        mov eax, dword ptr ds : [ebx+0x68]
        test eax, eax
        jne public_4f8f69
        test byte ptr ds : [ebx+8], 2
        jne public_4f8f69
        mov ecx, dword ptr ds : [ebx+0x5C]
        lea eax, ds:[ebx+0x60]
        test eax, eax
        lea edx, ds:[ecx+ecx*2]
        mov dword ptr ds : [ebx+0x68], ebx
        lea ecx, ds : [edx*4+public_674ce0]
        je public_4f8f66
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        je public_4f8f5e
        mov dword ptr ds : [edx], eax
        jmp public_4f8f61
        public_4f8f5e : nop
        mov dword ptr ds : [ecx+8], eax
        public_4f8f61 : nop
        mov dword ptr ds : [ecx+4], eax
        inc dword ptr ds : [ecx]
        public_4f8f66 : nop
        inc dword ptr ds : [ebx+0x58]
        public_4f8f69 : nop
        mov eax, dword ptr ds : [public_5d9a74]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        call public_4122a0
        mov eax, dword ptr ss : [esp+0x88]
        add esp, 8
        test eax, eax
        je public_4f8fc1
        mov ecx, dword ptr ds : [ebx+0x5C]
        test ecx, ecx
        jg public_4f8fab
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ebx+0x5C], edx
        public_4f8fab : nop
        mov eax, dword ptr ds : [ebx+0x5C]
        push eax
        call public_4fd560
        add esp, 4
        test eax, eax
        je public_4f8fc1
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+0xC], ecx
        public_4f8fc1 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x70
        ret 4
        UNREACHABLE_TRAP(0x4f8e10)
    }
}

#undef public_4f8e54
#undef public_4f8e78
#undef public_4f8e7b
#undef public_4f8ef4
#undef public_4f8ef6
#undef public_4f8f19
#undef public_4f8f23
#undef public_4f8f5e
#undef public_4f8f61
#undef public_4f8f66
#undef public_4f8f69
#undef public_4f8fab
#undef public_4f8fc1
