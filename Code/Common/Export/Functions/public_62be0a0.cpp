#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626ba00);
CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_62bea90);
CLANG_FORWARD_PROC_SYMBOL(public_62bed70);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);

#define public_62be0c5 _public_62be0c5
#define public_62be118 _public_62be118
#define public_62be12e _public_62be12e
#define public_62be133 _public_62be133
#define public_62be137 _public_62be137
#define public_62be14b _public_62be14b
#define public_62be154 _public_62be154
#define public_62be16a _public_62be16a
#define public_62be19e _public_62be19e
#define public_62be1a7 _public_62be1a7
#define public_62be1c8 _public_62be1c8
#define public_62be1e2 _public_62be1e2
#define public_62be1f8 _public_62be1f8
#define public_62be206 _public_62be206
#define public_62be210 _public_62be210
#define public_62be21a _public_62be21a
#define public_62be221 _public_62be221
#define public_62be230 _public_62be230
#define public_62be235 _public_62be235

PROC_DECLARE(0x62be0a0, internal_62be0a0, public_62be0a0);
extern "C" NAKED register_t __cdecl internal_62be0a0()
{
    __asm
    {
        sub esp, 0x38
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x24]
        test al, al
        mov dword ptr ss : [esp+0x10], edi
        je public_62be235
        mov eax, dword ptr ds : [edi+0x14]
        push ebp
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_62be230
        push ebx
        push esi
        public_62be0c5 : nop
        mov esi, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        test al, al
        je public_62be1e2
        push ebp
        lea ecx, ss:[esp+0x1C]
        add edi, 0x10
        push ecx
        mov ecx, edi
        call public_62be400
        mov edx, dword ptr ds : [esi]
        mov ebp, dword ptr ss : [esp+0x18]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        fstp st(0)
        fld dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x34], esi
        mov esi, dword ptr ds : [eax+4]
        cmp esi, ecx
        mov ebx, eax
        mov al, 1
        je public_62be137
        public_62be118 : nop
        fld dword ptr ss : [esp+0x40]
        mov ebx, esi
        fcomp dword ptr ds : [esi+0xC]
        fnstsw ax
        test ah, 5
        jp public_62be12e
        mov esi, dword ptr ds : [esi]
        mov al, 1
        jmp public_62be133
        public_62be12e : nop
        mov esi, dword ptr ds : [esi+8]
        xor al, al
        public_62be133 : nop
        cmp esi, ecx
        jne public_62be118
        public_62be137 : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_62be16a
        mov byte ptr ss : [esp+0x10], 1
        lea ecx, ss:[esp+0x10]
        lea eax, ss:[esp+0x20]
        public_62be14b : nop
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        push ebx
        push esi
        push eax
        public_62be154 : nop
        mov ecx, edi
        call public_62bea90
        push eax
        lea ecx, ss:[esp+0x40]
        call public_62bed70
        jmp public_62be221
        public_62be16a : nop
        test al, al
        mov dword ptr ss : [esp+0x14], ebx
        je public_62be1a7
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, edi
        call public_632c410
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax]
        jne public_62be19e
        lea eax, ss:[esp+0x11]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        push ebx
        push esi
        lea edx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x21], 1
        push edx
        jmp public_62be154
        public_62be19e : nop
        lea ecx, ss:[esp+0x14]
        call public_626ba00
        public_62be1a7 : nop
        mov eax, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+0xC]
        fcomp dword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 5
        jp public_62be1c8
        mov byte ptr ss : [esp+0x12], 1
        lea ecx, ss:[esp+0x12]
        lea eax, ss:[esp+0x2C]
        jmp public_62be14b
        public_62be1c8 : nop
        lea ecx, ss:[esp+0x13]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x1B], 0
        call public_62bed70
        jmp public_62be221
        public_62be1e2 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_62be206
        mov ebp, eax
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_62be221
        public_62be1f8 : nop
        mov ebp, eax
        mov eax, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_62be1f8
        jmp public_62be221
        public_62be206 : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp ebp, dword ptr ds : [eax+8]
        jne public_62be21a
        mov edi, edi
        public_62be210 : nop
        mov ebp, eax
        mov eax, dword ptr ds : [eax+4]
        cmp ebp, dword ptr ds : [eax+8]
        je public_62be210
        public_62be21a : nop
        cmp dword ptr ss : [ebp+8], eax
        je public_62be221
        mov ebp, eax
        public_62be221 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        cmp ebp, dword ptr ds : [edi+0x14]
        jne public_62be0c5
        pop esi
        pop ebx
        public_62be230 : nop
        mov byte ptr ds : [edi+0x24], 0
        pop ebp
        public_62be235 : nop
        pop edi
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x62be0a0)
    }
}

#undef public_62be0c5
#undef public_62be118
#undef public_62be12e
#undef public_62be133
#undef public_62be137
#undef public_62be14b
#undef public_62be154
#undef public_62be16a
#undef public_62be19e
#undef public_62be1a7
#undef public_62be1c8
#undef public_62be1e2
#undef public_62be1f8
#undef public_62be206
#undef public_62be210
#undef public_62be21a
#undef public_62be221
#undef public_62be230
#undef public_62be235
