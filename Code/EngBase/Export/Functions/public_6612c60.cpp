#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612b20);
CLANG_FORWARD_PROC_SYMBOL(public_6612c60);
CLANG_FORWARD_PROC_SYMBOL(public_6614290);

#define public_6612c7d _public_6612c7d
#define public_6612cbf _public_6612cbf
#define public_6612cc7 _public_6612cc7
#define public_6612cd4 _public_6612cd4
#define public_6612cf4 _public_6612cf4
#define public_6612cfb _public_6612cfb
#define public_6612d0d _public_6612d0d

PROC_DECLARE(0x6612c60, internal_6612c60, public_6612c60);
extern "C" NAKED register_t __cdecl internal_6612c60()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [ecx+0x10]
        cmp ebp, ecx
        mov dword ptr ss : [esp+8], ecx
        jae public_6612d0d
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        push edi
        public_6612c7d : nop
        mov esi, dword ptr ss : [ebp]
        push ebx
        mov ecx, esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x28]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, 1
        jne public_6612cfb
        mov edi, dword ptr ss : [esp+0x20]
        push esi
        mov ecx, edi
        call public_6614290
        mov edi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x1C], eax
        cmp eax, edi
        je public_6612cbf
        add eax, 0xC
        mov ecx, esi
        push eax
        call public_6612b20
        test al, al
        jne public_6612cbf
        lea eax, ss:[esp+0x1C]
        jmp public_6612cc7
        public_6612cbf : nop
        mov dword ptr ss : [esp+0x10], edi
        lea eax, ss:[esp+0x10]
        public_6612cc7 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        je public_6612cfb
        mov eax, dword ptr ds : [eax+0x1C]
        test eax, eax
        je public_6612cfb
        public_6612cd4 : nop
        cmp dword ptr ds : [eax+4], 2
        jne public_6612cf4
        fld dword ptr ds : [ebx]
        fadd dword ptr ds : [eax+0x18]
        fstp dword ptr ds : [eax+0x18]
        fld dword ptr ds : [ebx+4]
        fadd dword ptr ds : [eax+0x1C]
        fstp dword ptr ds : [eax+0x1C]
        fld dword ptr ds : [ebx+8]
        fadd dword ptr ds : [eax+0x20]
        fstp dword ptr ds : [eax+0x20]
        public_6612cf4 : nop
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        jne public_6612cd4
        public_6612cfb : nop
        mov eax, dword ptr ss : [esp+0x14]
        add ebp, 4
        cmp ebp, eax
        jb public_6612c7d
        pop edi
        pop esi
        pop ebx
        public_6612d0d : nop
        pop ebp
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6612c60)
    }
}

#undef public_6612c7d
#undef public_6612cbf
#undef public_6612cc7
#undef public_6612cd4
#undef public_6612cf4
#undef public_6612cfb
#undef public_6612d0d
