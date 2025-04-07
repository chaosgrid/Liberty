#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345460);
CLANG_FORWARD_PROC_SYMBOL(public_63454b0);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_634ccd0);
CLANG_FORWARD_PROC_SYMBOL(public_634d510);
CLANG_FORWARD_PROC_SYMBOL(public_634ebd0);
CLANG_FORWARD_PROC_SYMBOL(public_6350bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6351250);
CLANG_FORWARD_PROC_SYMBOL(public_6351a50);
CLANG_FORWARD_PROC_SYMBOL(public_6351b90);
CLANG_FORWARD_PROC_SYMBOL(public_6352220);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_6351bf0 _public_6351bf0
#define public_6351c00 _public_6351c00
#define public_6351d44 _public_6351d44
#define public_6351d71 _public_6351d71
#define public_6351da2 _public_6351da2
#define public_6351df1 _public_6351df1
#define public_6351e02 _public_6351e02
#define public_6351e1e _public_6351e1e
#define public_6351e57 _public_6351e57
#define public_6351e7c _public_6351e7c
#define public_6351e8d _public_6351e8d

PROC_DECLARE(0x6351b90, internal_6351b90, public_6351b90);
extern "C" NAKED register_t __cdecl internal_6351b90()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [eax+0xC]
        mov ebx, dword ptr ss : [ebp+0xFC]
        push edi
        mov edi, dword ptr ss : [ebp+0xF8]
        mov ecx, ebx
        push ecx
        mov edx, edi
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], ebx
        call public_634ccd0
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi]
        fsub dword ptr ds : [ecx+0x68]
        fadd dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [ecx+0x6C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [ebp+0xAC]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        je public_6351bf0
        fld dword ptr ds : [public_63a53d0]
        fdiv dword ptr ss : [esp+0x10]
        jmp public_6351c00
        public_6351bf0 : nop
        mov eax, dword ptr ss : [ebp+0xAC]
        fld dword ptr ss : [ebp+0xB0]
        mov dword ptr ss : [esp+0x10], eax
        public_6351c00 : nop
        fstp dword ptr ds : [ecx+0x70]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x68], edi
        mov dword ptr ds : [ecx+0x6C], ebx
        mov edx, dword ptr ds : [esi]
        mov ebx, dword ptr ss : [esp+0x38]
        add edx, 0xE4
        mov eax, ebx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0xC], eax
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[eax+0xE4]
        push ecx
        add eax, 0xD4
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_6351250
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ss : [esp+0x3C]
        add edx, 0xD4
        mov eax, ebx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0xC], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x108]
        mov dword ptr ds : [ecx+0x68], edx
        mov eax, dword ptr ss : [ebp+0x10C]
        mov dword ptr ds : [ecx+0x6C], eax
        fld dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi]
        fsub dword ptr ds : [eax+0xB8]
        add eax, 0xB4
        fld dword ptr ds : [edi+8]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x38]
        fsub dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x2C], ecx
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x28]
        call public_6347e60
        mov eax, dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        fld dword ptr ds : [edi]
        add eax, 0xB4
        fstp dword ptr ds : [eax]
        mov ecx, edx
        mov dword ptr ds : [eax+8], ecx
        fstp dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi]
        add eax, 0xC4
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi]
        add eax, 0xA4
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x38], edx
        add eax, 0x124
        fld dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        fld dword ptr ds : [edi]
        mov ecx, edx
        fstp dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ds : [eax+8], ecx
        fstp dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi]
        add edx, 0xF4
        push edx
        mov ecx, ebx
        call public_6350bc0
        mov eax, dword ptr ss : [esp+0x40]
        xor edi, edi
        cmp eax, edi
        je public_6351d44
        mov eax, dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [eax+0x70]
        fstp dword ptr ds : [eax+0x144]
        lea eax, ss:[esp+0x14]
        push eax
        jmp public_6351d71
        public_6351d44 : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x144], edi
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x20], 0x3F800000
        push edx
        public_6351d71 : nop
        mov ecx, esi
        call public_6351a50
        mov eax, dword ptr ds : [esi]
        fld dword ptr ds : [eax+0x14C]
        xor ecx, ecx
        fmul dword ptr ds : [eax+8]
        mov cx, word ptr ds : [eax+0x52]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x3C]
        mov eax, ecx
        dec eax
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], eax
        js public_6351e8d
        public_6351da2 : nop
        mov edx, dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx+0x54]
        mov ebx, dword ptr ds : [ecx+eax*4]
        fadd dword ptr ds : [ebx+0x5C]
        lea edi, ds:[ebx+0x44]
        xor eax, eax
        mov dword ptr ds : [edi+8], eax
        fst dword ptr ds : [edi+0x18]
        mov dword ptr ds : [edi+0xC], eax
        fstp dword ptr ds : [edi+0x10]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [edi+0x14]
        fstp dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ebx+0x78]
        shl edx, 0x18
        cmp edx, 0x8000000
        jl public_6351df1
        push ebx
        call public_634d510
        add esp, 4
        mov ecx, ebx
        call public_63454b0
        mov ecx, ebx
        call public_6345460
        public_6351df1 : nop
        mov eax, dword ptr ss : [esp+0x40]
        test eax, eax
        jne public_6351e02
        mov ecx, dword ptr ss : [ebp+0x10]
        push ebx
        call public_634ebd0
        public_6351e02 : nop
        fld dword ptr ds : [edi+0x28]
        mov ebx, 0x64
        fsub dword ptr ds : [edi+0x18]
        fst dword ptr ss : [esp+0x38]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_6351e57
        public_6351e1e : nop
        mov ecx, dword ptr ds : [edi+0x24]
        xor eax, eax
        mov ax, word ptr ds : [edi+0x2E]
        shl eax, 4
        mov ecx, dword ptr ds : [eax+ecx+0xC]
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        call dword ptr ds : [edx+4]
        mov ecx, ebx
        dec ebx
        test ecx, ecx
        jl public_6351e57
        fld dword ptr ds : [edi+0x28]
        fsub dword ptr ds : [edi+0x18]
        fst dword ptr ss : [esp+0x38]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_6351e1e
        public_6351e57 : nop
        fld dword ptr ds : [edi]
        fild dword ptr ds : [edi+0x1C]
        fcompp 
        fnstsw ax
        test ah, 1
        je public_6351e7c
        mov ecx, edi
        call public_6352220
        fld dword ptr ds : [edi]
        fadd dword ptr ds : [public_63a5400]
        call public_6391dae
        mov dword ptr ds : [edi+0x1C], eax
        public_6351e7c : nop
        mov eax, dword ptr ss : [esp+0x10]
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jns public_6351da2
        xor edi, edi
        public_6351e8d : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+0x144], edi
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x148], edi
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14C], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 0xC
        UNREACHABLE_TRAP(0x6351b90)
    }
}

#undef public_6351bf0
#undef public_6351c00
#undef public_6351d44
#undef public_6351d71
#undef public_6351da2
#undef public_6351df1
#undef public_6351e02
#undef public_6351e1e
#undef public_6351e57
#undef public_6351e7c
#undef public_6351e8d
