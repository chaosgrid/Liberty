#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf6ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c840);
CLANG_FORWARD_PROC_SYMBOL(public_6d0db30);
CLANG_FORWARD_PROC_SYMBOL(public_6d5e1e0);

#define public_6d0db54 _public_6d0db54
#define public_6d0db7e _public_6d0db7e
#define public_6d0db90 _public_6d0db90
#define public_6d0dc7e _public_6d0dc7e
#define public_6d0dcc7 _public_6d0dcc7
#define public_6d0dcdc _public_6d0dcdc
#define public_6d0dd10 _public_6d0dd10
#define public_6d0dd18 _public_6d0dd18
#define public_6d0dd28 _public_6d0dd28

PROC_DECLARE(0x6d0db30, internal_6d0db30, public_6d0db30);
extern "C" NAKED register_t __cdecl internal_6d0db30()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ss : [esp+0x18]
        test eax, 0x3FFFFFFF
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ss : [esp+0x13], 0
        jne public_6d0db54
        mov byte ptr ss : [esp+0x13], 1
        jmp public_6d0db7e
        public_6d0db54 : nop
        push eax
        mov ecx, edi
        call public_6d0c840
        test eax, eax
        je public_6d0dd28
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        public_6d0db7e : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_6d0dd28
        mov ebx, dword ptr ss : [esp+0x2C]
        nop 
        public_6d0db90 : nop
        mov eax, dword ptr ss : [ebp+0x40]
        test eax, eax
        jbe public_6d0dd18
        mov edx, dword ptr ds : [public_6d90264]
        lea ecx, ds:[eax-1]
        cmp ecx, edx
        jae public_6d0dd18
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        mov esi, dword ptr ds : [ecx+edx+0x348]
        test esi, esi
        je public_6d0dd18
        imul eax, 0x418
        mov esi, dword ptr ds : [eax+edx-0x34]
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_6d0dcc7
        cmp ebx, esi
        je public_6d0dc7e
        mov al, byte ptr ss : [esp+0x7C]
        test al, al
        je public_6d0dd18
        push esi
        mov ecx, edi
        call public_6d0c840
        test eax, eax
        je public_6d0dd18
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x20]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcomp dword ptr ds : [public_6d66af4]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        je public_6d0dd18
        mov eax, dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ss : [esp+0x70]
        push eax
        mov eax, dword ptr ss : [esp+0x70]
        push ecx
        mov ecx, dword ptr ss : [esp+0x70]
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push eax
        mov eax, dword ptr ss : [esp+0x38]
        push ecx
        sub esp, 0x34
        mov edi, esp
        push edx
        mov ecx, 0xD
        lea esi, ss:[esp+0x80]
        push ebx
        rep movsd
        push eax
        jmp public_6d0dd10
        public_6d0dc7e : nop
        mov ecx, dword ptr ss : [esp+0x78]
        mov edx, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ss : [esp+0x70]
        push ecx
        mov ecx, dword ptr ss : [esp+0x70]
        push edx
        mov edx, dword ptr ss : [esp+0x70]
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        push edx
        sub esp, 0x34
        mov edi, esp
        push eax
        mov ecx, 0xD
        lea esi, ss:[esp+0x80]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x74]
        push ebx
        push ecx
        lea ecx, ss:[ebp+8]
        call public_6cf6ac0
        mov al, byte ptr ss : [esp+0x7C]
        test al, al
        je public_6d0dd28
        jmp public_6d0dd18
        public_6d0dcc7 : nop
        call public_6d5e1e0
        test al, al
        jne public_6d0dcdc
        cmp ebx, esi
        je public_6d0dcdc
        mov al, byte ptr ss : [esp+0x7C]
        test al, al
        je public_6d0dd18
        public_6d0dcdc : nop
        mov edx, dword ptr ss : [esp+0x78]
        mov eax, dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ss : [esp+0x70]
        push edx
        mov edx, dword ptr ss : [esp+0x70]
        push eax
        mov eax, dword ptr ss : [esp+0x70]
        push ecx
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push eax
        sub esp, 0x34
        mov edi, esp
        mov ecx, 0xD
        lea esi, ss:[esp+0x7C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x78]
        push ecx
        push ebx
        push edx
        public_6d0dd10 : nop
        lea ecx, ss:[ebp+8]
        call public_6cf6ac0
        public_6d0dd18 : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [edi+0xC]
        jne public_6d0db90
        public_6d0dd28 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0x58
        UNREACHABLE_TRAP(0x6d0db30)
    }
}

#undef public_6d0db54
#undef public_6d0db7e
#undef public_6d0db90
#undef public_6d0dc7e
#undef public_6d0dcc7
#undef public_6d0dcdc
#undef public_6d0dd10
#undef public_6d0dd18
#undef public_6d0dd28
