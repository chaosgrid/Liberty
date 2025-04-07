#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a340);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e780);
CLANG_FORWARD_PROC_SYMBOL(public_6c2ea00);
CLANG_FORWARD_PROC_SYMBOL(public_6c2ea20);
CLANG_FORWARD_PROC_SYMBOL(public_6c34160);

#define public_6c2e7b8 _public_6c2e7b8
#define public_6c2e7c8 _public_6c2e7c8
#define public_6c2e7cb _public_6c2e7cb
#define public_6c2e7cf _public_6c2e7cf
#define public_6c2e7ff _public_6c2e7ff
#define public_6c2e841 _public_6c2e841
#define public_6c2e84e _public_6c2e84e
#define public_6c2e87a _public_6c2e87a
#define public_6c2e889 _public_6c2e889
#define public_6c2e89d _public_6c2e89d

PROC_DECLARE(0x6c2e780, internal_6c2e780, public_6c2e780);
extern "C" NAKED register_t __cdecl internal_6c2e780()
{
    __asm
    {
        sub esp, 0x28
        push ebp
        mov ebp, dword ptr ss : [esp+0x30]
        xor al, al
        test ebp, ebp
        je public_6c2e89d
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [public_6c37d30]
        push esi
        push edi
        mov edi, dword ptr ds : [public_6c37d2c]
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], 0
        mov esi, dword ptr ds : [edi+4]
        cmp esi, edx
        mov al, 1
        je public_6c2e7cf
        public_6c2e7b8 : nop
        cmp ecx, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov edi, esi
        je public_6c2e7c8
        mov esi, dword ptr ds : [esi]
        jmp public_6c2e7cb
        public_6c2e7c8 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6c2e7cb : nop
        cmp esi, edx
        jne public_6c2e7b8
        public_6c2e7cf : nop
        mov dl, byte ptr ds : [public_6c37d34]
        test dl, dl
        je public_6c2e7ff
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        push edi
        push esi
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, offset public_6c37d28
        mov byte ptr ss : [esp+0x4C], 1
        call public_6c2ea20
        push eax
        jmp public_6c2e889
        public_6c2e7ff : nop
        test al, al
        mov dword ptr ss : [esp+0x10], edi
        je public_6c2e84e
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_6c37d28
        call public_6c34160
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax]
        jne public_6c2e841
        lea edx, ss:[esp+0xD]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, offset public_6c37d28
        mov byte ptr ss : [esp+0x21], 1
        call public_6c2ea20
        push eax
        jmp public_6c2e889
        public_6c2e841 : nop
        lea ecx, ss:[esp+0x10]
        call public_6c2a340
        mov ecx, dword ptr ss : [esp+0x24]
        public_6c2e84e : nop
        mov edx, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [edx+0xC], ecx
        jae public_6c2e87a
        lea eax, ss:[esp+0xE]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        push edi
        push esi
        lea edx, ss:[esp+0x30]
        push edx
        mov ecx, offset public_6c37d28
        mov byte ptr ss : [esp+0x22], 1
        call public_6c2ea20
        push eax
        jmp public_6c2e889
        public_6c2e87a : nop
        lea eax, ss:[esp+0xF]
        push eax
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x13], 0
        push ecx
        public_6c2e889 : nop
        lea ecx, ss:[esp+0x34]
        call public_6c2ea00
        mov edx, dword ptr ss : [esp+0x2C]
        pop edi
        mov dword ptr ds : [edx+0x10], ebp
        mov al, 1
        pop esi
        public_6c2e89d : nop
        pop ebp
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6c2e780)
    }
}

#undef public_6c2e7b8
#undef public_6c2e7c8
#undef public_6c2e7cb
#undef public_6c2e7cf
#undef public_6c2e7ff
#undef public_6c2e841
#undef public_6c2e84e
#undef public_6c2e87a
#undef public_6c2e889
#undef public_6c2e89d
