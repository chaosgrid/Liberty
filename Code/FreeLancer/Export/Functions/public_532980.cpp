#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_5379b0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_5329f8 _public_5329f8
#define public_532a0f _public_532a0f
#define public_532a1e _public_532a1e
#define public_532a60 _public_532a60
#define public_532a74 _public_532a74
#define public_532aeb _public_532aeb
#define public_532aed _public_532aed
#define public_532b33 _public_532b33
#define public_532b66 _public_532b66
#define public_532b7c _public_532b7c

PROC_DECLARE(0x532980, internal_532980, public_532980);
extern "C" NAKED register_t __cdecl internal_532980()
{
    __asm
    {
        sub esp, 0x64
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x70]
        mov eax, ecx
        sub eax, 0xB
        je public_532a0f
        dec eax
        jne public_532b66
        mov ecx, dword ptr ds : [edi+8]
        lea eax, ds:[edi+0x10]
        push eax
        add ecx, 0x28
        call public_4fcef0
        mov esi, dword ptr ds : [edi+8]
        call public_54baf0
        cmp eax, esi
        jne public_532b7c
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x158]
        test al, al
        jne public_532b7c
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x3C]
        fcomp dword ptr ds : [public_5c7474]
        push 0
        fnstsw ax
        test ah, 0x41
        jne public_5329f8
        mov ecx, dword ptr ds : [public_67551c]
        push ecx
        call public_489e80
        add esp, 8
        pop edi
        pop esi
        add esp, 0x64
        ret 8
        public_5329f8 : nop
        mov edx, dword ptr ds : [public_675518]
        push edx
        call public_489e80
        add esp, 8
        pop edi
        pop esi
        add esp, 0x64
        ret 8
        public_532a0f : nop
        mov ecx, dword ptr ds : [edi+0x18]
        test ecx, ecx
        lea esi, ds:[edi+0x10]
        je public_532a1e
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_532a1e : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_532a60
        lea ecx, ss:[esp+0x3C]
        call public_4215b0
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x3C]
        push eax
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x64], 0
        mov edx, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        call dword ptr ds : [edx+0x94]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_532a60 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_532a74
        call public_5379b0
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        public_532a74 : nop
        push ebx
        mov ecx, esi
        call public_502d90
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        je public_532aeb
        mov ecx, dword ptr ds : [eax+0xC]
        mov ebx, dword ptr ds : [ecx+4]
        jmp public_532aed
        public_532aeb : nop
        xor ebx, ebx
        public_532aed : nop
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x74], eax
        mov eax, dword ptr ds : [edi+8]
        add ebx, 0x54
        mov ecx, ebx
        mov dword ptr ss : [esp+0xC], eax
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_532b33
        mov edx, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        push eax
        push ebx
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503070
        public_532b33 : nop
        mov edi, dword ptr ds : [edi+8]
        call public_54baf0
        cmp eax, edi
        pop ebx
        jne public_532b7c
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x158]
        test al, al
        jne public_532b7c
        mov eax, dword ptr ds : [public_675520]
        push 0
        push eax
        call public_489e80
        add esp, 8
        pop edi
        pop esi
        add esp, 0x64
        ret 8
        public_532b66 : nop
        cmp ecx, 0xA
        jne public_532b7c
        mov ecx, dword ptr ds : [edi+4]
        push edi
        call dword ptr ds : [public_5c6938]
        mov dword ptr ds : [edi+4], 0
        public_532b7c : nop
        pop edi
        pop esi
        add esp, 0x64
        ret 8
        UNREACHABLE_TRAP(0x532980)
    }
}

#undef public_5329f8
#undef public_532a0f
#undef public_532a1e
#undef public_532a60
#undef public_532a74
#undef public_532aeb
#undef public_532aed
#undef public_532b33
#undef public_532b66
#undef public_532b7c
