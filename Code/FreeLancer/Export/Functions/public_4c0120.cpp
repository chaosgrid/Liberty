#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421b70);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_45a9f0);
CLANG_FORWARD_PROC_SYMBOL(public_4bff30);
CLANG_FORWARD_PROC_SYMBOL(public_4c4610);
CLANG_FORWARD_PROC_SYMBOL(public_5a0760);

#define public_4c0194 _public_4c0194
#define public_4c019c _public_4c019c
#define public_4c01a9 _public_4c01a9
#define public_4c0315 _public_4c0315
#define public_4c035b _public_4c035b
#define public_4c04ce _public_4c04ce
#define public_4c04d6 _public_4c04d6

PROC_DECLARE(0x4c0120, internal_4c0120, public_4c0120);
extern "C" NAKED register_t __cdecl internal_4c0120()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        call public_45a9f0
        mov eax, dword ptr ds : [ebx+0x35C]
        push eax
        call public_4bff30
        add esp, 4
        mov ecx, ebx
        call public_5a0760
        mov eax, dword ptr ds : [ebx+0x3B8]
        test eax, eax
        je public_4c0315
        call public_4c4610
        fld qword ptr ds : [ebx+0x3C0]
        fcomp qword ptr ds : [public_5cbfb0]
        fnstsw ax
        test ah, 0x41
        jne public_4c0194
        fdivr qword ptr ds : [ebx+0x3C0]
        fcom qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jne public_4c019c
        mov ecx, dword ptr ds : [ebx+0x3B8]
        fstp st(0)
        fld qword ptr ds : [public_5c89b8]
        mov byte ptr ds : [ecx+0x348], 1
        jmp public_4c01a9
        public_4c0194 : nop
        fstp st(0)
        fld qword ptr ds : [public_5c8ba8]
        public_4c019c : nop
        mov edx, dword ptr ds : [ebx+0x3B8]
        mov byte ptr ds : [edx+0x348], 1
        public_4c01a9 : nop
        mov ebp, dword ptr ds : [ebx+0x3B8]
        fld dword ptr ss : [ebp+0xB4]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        fmul st, st(1)
        mov ecx, dword ptr ds : [eax]
        add ebp, 0xB4
        fadd st(0), st
        push 1
        fsub dword ptr ss : [ebp]
        push 7
        push eax
        fstp qword ptr ss : [esp+0x1C]
        fstp st(0)
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 8
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ebx+0x3B8]
        mov edx, dword ptr ds : [edx+0x84]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov esi, eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x1C]
        push 0
        rep movsd
        call public_422690
        push 0xDE1
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push 4
        push 2
        call public_4220c0
        push 0xA
        push 0
        push 0
        push 0
        call public_421b70
        push 8
        call public_421670
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [ebp]
        push 0
        push ecx
        push edx
        call public_421cc0
        fld dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [ebp]
        fchs 
        add esp, 0x38
        push 0
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        call public_421cc0
        fld qword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        add esp, 0xC
        fld dword ptr ss : [ebp+4]
        push 0
        fchs 
        mov esi, dword ptr ss : [esp+0x14]
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        call public_421cc0
        mov ecx, dword ptr ss : [ebp+4]
        push 0
        push ecx
        push esi
        call public_421cc0
        add esp, 0x18
        call public_421690
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 4
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ebx+0x3B8]
        mov edx, dword ptr ds : [edx+0x84]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push 0
        push 0x3F800000
        push edx
/*FIXUP push offset public_67dbf8 @0x4c02ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        push eax
        call dword ptr ds : [ecx+0x1C]
        push 0xBE2
        call public_421ed0
        add esp, 4
        public_4c0315 : nop
        mov ecx, dword ptr ds : [ebx+0x3DC]
        test ecx, ecx
        je public_4c04ce
        fld qword ptr ds : [ebx+0x3E8]
        fcomp qword ptr ds : [public_5cbfb0]
        fnstsw ax
        test ah, 0x41
        jne public_4c04d6
        fld qword ptr ds : [ebx+0x3E8]
        fdiv qword ptr ds : [ebx+0x3F0]
        fcom qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jne public_4c035b
        fstp st(0)
        fld qword ptr ds : [public_5c89b8]
        public_4c035b : nop
        mov byte ptr ds : [ecx+0x348], 1
        mov ebp, dword ptr ds : [ebx+0x3DC]
        fld dword ptr ss : [ebp+0xB4]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        fmul st, st(1)
        mov ecx, dword ptr ds : [eax]
        add ebp, 0xB4
        fadd st(0), st
        push 1
        fsub dword ptr ss : [ebp]
        push 7
        push eax
        fstp qword ptr ss : [esp+0x1C]
        fstp st(0)
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 8
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ebx+0x3DC]
        mov edx, dword ptr ds : [edx+0x84]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov esi, eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x1C]
        push 0
        rep movsd
        call public_422690
        push 0xDE1
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push 4
        push 2
        call public_4220c0
        push 0xA
        push 0
        push 0
        push 0
        call public_421b70
        push 8
        call public_421670
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [ebp]
        push 0
        push ecx
        push edx
        call public_421cc0
        fld dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [ebp]
        fchs 
        add esp, 0x38
        push 0
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        call public_421cc0
        fld qword ptr ss : [esp+0x1C]
        add esp, 0xC
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [ebp+4]
        push 0
        mov esi, dword ptr ss : [esp+0x14]
        fchs 
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        call public_421cc0
        mov ecx, dword ptr ss : [ebp+4]
        push 0
        push ecx
        push esi
        call public_421cc0
        add esp, 0x18
        call public_421690
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 4
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ebx+0x3DC]
        mov edx, dword ptr ds : [edx+0x84]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push 0
        push 0x3F800000
        push edx
/*FIXUP push offset public_67dbf8 @0x4c04b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        push eax
        call dword ptr ds : [ecx+0x1C]
        push 0xBE2
        call public_421ed0
        add esp, 4
        public_4c04ce : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 
        public_4c04d6 : nop
        fld qword ptr ds : [public_5c8ba8]
        jmp public_4c035b
        UNREACHABLE_TRAP(0x4c0120)
    }
}

#undef public_4c0194
#undef public_4c019c
#undef public_4c01a9
#undef public_4c0315
#undef public_4c035b
#undef public_4c04ce
#undef public_4c04d6
