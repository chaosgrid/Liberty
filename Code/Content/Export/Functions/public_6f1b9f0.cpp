#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6f19cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1a610);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f2a240);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);

#define public_6f1ba10 _public_6f1ba10
#define public_6f1ba24 _public_6f1ba24
#define public_6f1ba40 _public_6f1ba40
#define public_6f1ba54 _public_6f1ba54
#define public_6f1ba6f _public_6f1ba6f
#define public_6f1ba75 _public_6f1ba75
#define public_6f1ba9f _public_6f1ba9f
#define public_6f1baab _public_6f1baab
#define public_6f1bad7 _public_6f1bad7
#define public_6f1bada _public_6f1bada
#define public_6f1bb40 _public_6f1bb40
#define public_6f1bb47 _public_6f1bb47
#define public_6f1bb5b _public_6f1bb5b
#define public_6f1bb61 _public_6f1bb61
#define public_6f1bb65 _public_6f1bb65
#define public_6f1bb8d _public_6f1bb8d
#define public_6f1bb91 _public_6f1bb91
#define public_6f1bba1 _public_6f1bba1
#define public_6f1bbaa _public_6f1bbaa
#define public_6f1bbdc _public_6f1bbdc
#define public_6f1bbf0 _public_6f1bbf0
#define public_6f1bc2f _public_6f1bc2f
#define public_6f1bc51 _public_6f1bc51
#define public_6f1bc5f _public_6f1bc5f
#define public_6f1bd42 _public_6f1bd42
#define public_6f1bd7c _public_6f1bd7c
#define public_6f1bdaf _public_6f1bdaf
#define public_6f1bdeb _public_6f1bdeb
#define public_6f1bdef _public_6f1bdef
#define public_6f1bdfe _public_6f1bdfe
#define public_6f1be0a _public_6f1be0a

PROC_DECLARE(0x6f1b9f0, internal_6f1b9f0, public_6f1b9f0);
extern "C" NAKED register_t __cdecl internal_6f1b9f0()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ds : [eax]
        xor bl, bl
        cmp esi, eax
        push edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6f1ba24
        lea ebx, ds:[ebx]
        public_6f1ba10 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 5
        je public_6f1ba24
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+8]
        jne public_6f1ba10
        public_6f1ba24 : nop
        mov edi, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        mov eax, dword ptr ss : [ebp+8]
        jne public_6f1baab
        cmp esi, eax
        je public_6f1be0a
        mov edi, esi
        lea esp, ss:[esp]
        public_6f1ba40 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 5
        jne public_6f1ba54
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [ebp+8]
        jne public_6f1ba40
        public_6f1ba54 : nop
        test edi, edi
        mov dword ptr ss : [esp+0x4C], edi
        jne public_6f1ba6f
        push edi
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x54], esi
        call public_6f68e30
        public_6f1ba6f : nop
        cmp esi, dword ptr ss : [esp+0x4C]
        je public_6f1ba9f
        public_6f1ba75 : nop
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x48]
        push edx
        mov dword ptr ss : [esp+0x4C], ecx
        call public_6f1a610
        mov eax, dword ptr ss : [ebp]
        add esp, 4
        push esi
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, dword ptr ss : [esp+0x4C]
        jne public_6f1ba75
        public_6f1ba9f : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x30
        ret 0x2C
        public_6f1baab : nop
        cmp esi, eax
        je public_6f1bb91
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 5
        jne public_6f1bb91
        mov eax, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [eax+8], 1
        mov ecx, dword ptr ds : [esi+8]
        jne public_6f1bad7
        add eax, 0x18
        jmp public_6f1bada
        public_6f1bad7 : nop
        add eax, 0xC
        public_6f1bada : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], edx
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [ecx+0x48]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x30], eax
        fld st(0)
        mov dword ptr ss : [esp+0x2C], edx
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f1bb40
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [ecx+0x4C]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f1bb40
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ds : [ecx+0x50]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_6f1be0a
        public_6f1bb40 : nop
        cmp esi, dword ptr ss : [ebp+8]
        mov edi, esi
        je public_6f1bb5b
        public_6f1bb47 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 5
        jne public_6f1bb5b
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [ebp+8]
        jne public_6f1bb47
        public_6f1bb5b : nop
        test edi, edi
        jne public_6f1bb61
        mov edi, dword ptr ds : [esi]
        public_6f1bb61 : nop
        cmp esi, edi
        je public_6f1bb8d
        public_6f1bb65 : nop
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x20]
        push ecx
        mov dword ptr ss : [esp+0x24], eax
        call public_6f1a610
        mov edx, dword ptr ss : [ebp]
        add esp, 4
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, edi
        jne public_6f1bb65
        public_6f1bb8d : nop
        mov edi, dword ptr ss : [esp+0x48]
        public_6f1bb91 : nop
        mov eax, dword ptr ss : [esp+0x6C]
        test eax, eax
        je public_6f1bba1
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        jmp public_6f1bbaa
        public_6f1bba1 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x18], eax
        public_6f1bbaa : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [ecx]
        mov esi, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x5C]
        test ecx, ecx
        mov eax, dword ptr ds : [esi+0x48]
        mov dword ptr ss : [esp+0x10], eax
        je public_6f1bbdc
        lea edx, ss:[esp+0x10]
        push edx
        push ecx
        push eax
        call public_6f2a240
        add esp, 0xC
        test eax, eax
        je public_6f1bbdc
        mov eax, dword ptr ds : [esi+0x48]
        mov dword ptr ss : [esp+0x10], eax
        public_6f1bbdc : nop
        mov ebx, dword ptr ss : [esp+0x48]
        cmp edi, dword ptr ds : [ebx+4]
        je public_6f1bdfe
        lea esp, ss:[esp]
        public_6f1bbf0 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        push 5
        mov dword ptr ss : [esp+0x20], 0
        call public_6f19cd0
        mov esi, dword ptr ss : [esp+0x20]
        add esp, 0xC
        test esi, esi
        je public_6f1bc2f
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ss:[ebp+4]
        call public_6f1e390
        mov esi, dword ptr ss : [esp+0x14]
        public_6f1bc2f : nop
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        jne public_6f1bd7c
        mov eax, dword ptr ds : [ebx+4]
        cmp edi, dword ptr ds : [eax]
        jne public_6f1bc51
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [esi+0x1C], ecx
        mov dword ptr ds : [esi+0xC], edx
        jmp public_6f1bc5f
        public_6f1bc51 : nop
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0xC], ecx
        public_6f1bc5f : nop
        lea edx, ds:[edi+0xC]
        mov ebp, dword ptr ds : [edx]
        mov ebx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [edi+0x24]
        lea ecx, ss:[esp+0x6C]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x74], 0xFFFFFFFF
        call dword ptr ds : [public_6fb364c]
        mov eax, dword ptr ss : [esp+0x74]
        mov dword ptr ds : [esi+0x38], eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x38]
        lea edx, ds:[esi+0x48]
        mov dword ptr ds : [edx], ebp
        mov dword ptr ds : [edx+4], ebx
        mov ebx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [esi+0x3C], ecx
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [esi+0x44], 1
        mov ecx, dword ptr ds : [ebx+0x48]
        mov dword ptr ds : [esi+0x40], ecx
        lea edx, ds:[edi+0x18]
        mov esi, dword ptr ds : [edx]
        mov ebp, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [edi+0x28]
        lea ecx, ss:[esp+0x74]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x7C], 0xFFFFFFFF
        call dword ptr ds : [public_6fb364c]
        mov ecx, dword ptr ss : [esp+0x2C]
        lea eax, ss:[esp+0x24]
        push eax
        push ecx
        push 5
        mov dword ptr ss : [esp+0x30], 0
        call public_6f19cd0
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0x1C
        test eax, eax
        je public_6f1bd42
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+4]
        mov edx, dword ptr ds : [eax+4]
        push edx
        push eax
        mov dword ptr ss : [esp+0x28], ecx
        call public_6f93790
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+0x14]
        public_6f1bd42 : nop
        mov edx, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [eax+0x1C], edx
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [eax+0x38], edx
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ds:[eax+0x48]
        mov dword ptr ds : [edx], esi
        mov dword ptr ds : [eax+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edx+4], ebp
        mov dword ptr ds : [eax+0x44], 1
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ds : [ebx+0x48]
        mov dword ptr ds : [eax+0x40], edx
        jmp public_6f1bdeb
        public_6f1bd7c : nop
        cmp eax, 1
        jne public_6f1bdef
        lea eax, ds:[edi+0x18]
        mov ebx, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x5C]
        test eax, eax
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_6f1bdaf
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [public_6fb364c]
        add esp, 8
        public_6f1bdaf : nop
        mov ecx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0xC], ecx
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x38], edx
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x3C]
        lea ecx, ds:[esi+0x48]
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [esi+0x3C], eax
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [ecx+4], ebp
        mov dword ptr ds : [esi+0x44], 1
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ds : [eax+0x48]
        mov dword ptr ds : [esi+0x40], ecx
        public_6f1bdeb : nop
        mov ebp, dword ptr ss : [esp+0x4C]
        public_6f1bdef : nop
        mov ebx, dword ptr ss : [esp+0x48]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ebx+4]
        jne public_6f1bbf0
        public_6f1bdfe : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x30
        ret 0x2C
        public_6f1be0a : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x30
        ret 0x2C
        UNREACHABLE_TRAP(0x6f1b9f0)
    }
}

#undef public_6f1ba10
#undef public_6f1ba24
#undef public_6f1ba40
#undef public_6f1ba54
#undef public_6f1ba6f
#undef public_6f1ba75
#undef public_6f1ba9f
#undef public_6f1baab
#undef public_6f1bad7
#undef public_6f1bada
#undef public_6f1bb40
#undef public_6f1bb47
#undef public_6f1bb5b
#undef public_6f1bb61
#undef public_6f1bb65
#undef public_6f1bb8d
#undef public_6f1bb91
#undef public_6f1bba1
#undef public_6f1bbaa
#undef public_6f1bbdc
#undef public_6f1bbf0
#undef public_6f1bc2f
#undef public_6f1bc51
#undef public_6f1bc5f
#undef public_6f1bd42
#undef public_6f1bd7c
#undef public_6f1bdaf
#undef public_6f1bdeb
#undef public_6f1bdef
#undef public_6f1bdfe
#undef public_6f1be0a
