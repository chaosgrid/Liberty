#include "Server-PCH.h"


#define public_6cec2c7 _public_6cec2c7
#define public_6cec2d7 _public_6cec2d7

PROC_DECLARE(0x6cec260, internal_6cec260, public_6cec260);
extern "C" NAKED register_t __cdecl internal_6cec260()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        push edi
        call dword ptr ds : [public_6d642ec]
        mov edx, dword ptr ds : [eax+4]
        mov ebp, dword ptr ss : [esp+0x48]
        mov ebx, dword ptr ss : [esp+0x44]
        mov ecx, edx
        and ecx, 0x3FFFFFFF
        inc edx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [ebp], ecx
        mov eax, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x3C]
        fst dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ebx+0x14], 0x800
        jne public_6cec2c7
        push ebx
        fstp st(0)
        call dword ptr ds : [public_6d64304]
        mov esi, dword ptr ds : [eax+0x4C]
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0xC], eax
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        fstp dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [esi+0x28]
        mov dword ptr ss : [ebp+0x14], eax
        jmp public_6cec2d7
        public_6cec2c7 : nop
        mov ecx, dword ptr ss : [ebp+4]
        fstp dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp+0xC], ecx
        mov dword ptr ss : [ebp+0x14], 1
        public_6cec2d7 : nop
        mov edx, dword ptr ds : [ebx]
        lea esi, ss:[ebp+0x2C]
        push esi
        mov ecx, ebx
        call dword ptr ds : [edx+0x70]
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x84]
        mov ecx, dword ptr ds : [public_6d64a5c]
        mov edi, eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push edi
        push eax
        mov dword ptr ss : [esp+0x50], edi
        call dword ptr ds : [edx+0x90]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+8], eax
        mov ecx, dword ptr ds : [public_6d64a5c]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [edx+0x98]
        mov esi, eax
        lea edi, ss:[ebp+0x38]
        mov ecx, 9
        lea eax, ss:[esp+0x28]
        push eax
        mov eax, dword ptr ss : [esp+0x4C]
        rep movsd
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        call dword ptr ds : [public_6d64300]
        mov esi, dword ptr ds : [public_6d64288]
        add esp, 0x10
        mov ecx, ebx
        call esi
        mov ecx, ebx
        mov edi, eax
        call esi
        fld dword ptr ds : [edi+0x78]
        fdiv dword ptr ds : [eax+0x20]
        mov edi, dword ptr ds : [public_6d64c7c]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        call edi
        mov dword ptr ss : [esp+0x48], eax
        fild dword ptr ss : [esp+0x48]
        mov edx, dword ptr ds : [ebx]
        lea esi, ss:[ebp+0x20]
        fmul dword ptr ds : [public_6d656b8]
        fmul qword ptr ds : [public_6d656d8]
        fadd qword ptr ds : [public_6d656d0]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        push esi
        mov ecx, ebx
        call dword ptr ds : [edx+0x6C]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        call edi
        mov dword ptr ss : [esp+0x48], eax
        fild dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [public_6d656b8]
        fstp dword ptr ss : [esp+0x44]
        call edi
        mov dword ptr ss : [esp+0x48], eax
        fild dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x20], eax
        fmul dword ptr ds : [public_6d656b8]
        fstp dword ptr ss : [esp+0x1C]
        call edi
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x48], eax
        fild dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x20]
        lea esi, ss:[ebp+0x5C]
        mov ecx, esi
        fmul dword ptr ds : [public_6d656b8]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], eax
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+8], edx
        call edi
        mov dword ptr ss : [esp+0x48], eax
        fild dword ptr ss : [esp+0x48]
        mov ecx, ebx
        fmul dword ptr ds : [public_6d656b8]
        fld dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+4]
        fld dword ptr ds : [esi]
        fxch st(3)
        fmul qword ptr ds : [public_6d656c8]
        fadd qword ptr ds : [public_6d656c0]
        fld st(3)
        fmul st, st(4)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x48]
        fdivp 
        fstp dword ptr ss : [esp+0x48]
        fstp st(2)
        fstp st(1)
        fstp st(0)
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ebx]
        call dword ptr ds : [eax+0x14]
        pop edi
        mov byte ptr ss : [ebp+0x69], al
        pop esi
        mov al, 1
        pop ebp
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x6cec260)
    }
}

#undef public_6cec2c7
#undef public_6cec2d7
