#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d01860);

#define public_6d01907 _public_6d01907
#define public_6d01955 _public_6d01955

PROC_DECLARE(0x6d01860, internal_6d01860, public_6d01860);
extern "C" NAKED register_t __cdecl internal_6d01860()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [ebx]
        push esi
        mov esi, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [esi+0xE0]
        push edi
        lea ecx, ss:[esp+0xC]
        push ecx
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x1C]
        mov edi, dword ptr ds : [public_6d645b8]
        push eax
        call edi
        add esp, 0xC
        test al, al
        je public_6d01907
        mov eax, dword ptr ds : [esi+0xE4]
        mov edx, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x1C]
        push eax
        call edi
        add esp, 0xC
        test al, al
        je public_6d01907
        mov eax, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [esi+0xE0]
        mov edx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ds : [public_6d642f0]
        push eax
        push edi
        push ecx
        push edx
        call ebp
        mov ecx, dword ptr ds : [esi+0xE4]
        mov edx, dword ptr ss : [esp+0x24]
        push 0
        lea eax, ss:[esp+0x38]
        push eax
        push ecx
        push edx
        call ebp
        fld dword ptr ss : [esp+0x44]
        fsub dword ptr ds : [edi]
        add esp, 0x20
        pop ebp
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [edi+8]
        jmp public_6d01955
        public_6d01907 : nop
        mov edx, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ss : [esp+0x30]
        add edx, 0x2C
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [ebx+0x10]
        add esi, 8
        mov ecx, 9
        mov edi, eax
        rep movsd
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+0x10]
        fld dword ptr ds : [eax+0x1C]
        fstp dword ptr ss : [esp+0x28]
        fxch 
        fchs 
        fstp dword ptr ss : [esp+0x14]
        fchs 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x28]
        fchs 
        public_6d01955 : nop
        mov esi, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        call dword ptr ds : [public_6d64c7c]
        mov edx, dword ptr ds : [public_6d645b4]
        mov dword ptr ss : [esp+0x30], eax
        fild dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebx
        fmul dword ptr ds : [public_6d656b8]
        fld dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+4]
        fld dword ptr ds : [esi]
        fxch st(3)
        fmul qword ptr ds : [public_6d656d8]
        fadd qword ptr ds : [public_6d656d0]
        fmul dword ptr ds : [edx]
        fld st(3)
        fmul st, st(4)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x34]
        fdivp 
        fstp dword ptr ss : [esp+0x34]
        fstp st(2)
        fstp st(1)
        fstp st(0)
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ebx]
        call dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fadd dword ptr ds : [esi]
        pop edi
        fstp dword ptr ds : [esi]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fld dword ptr ds : [eax+8]
        fadd dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        pop esi
        pop ebx
        add esp, 0x20
        ret 0xC
        UNREACHABLE_TRAP(0x6d01860)
    }
}

#undef public_6d01907
#undef public_6d01955
