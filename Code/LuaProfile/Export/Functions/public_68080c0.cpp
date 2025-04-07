#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68075c0);
CLANG_FORWARD_PROC_SYMBOL(public_68080c0);

#define public_68080d8 _public_68080d8
#define public_68080db _public_68080db
#define public_68080e7 _public_68080e7
#define public_68080fa _public_68080fa
#define public_6808102 _public_6808102
#define public_680812f _public_680812f

PROC_DECLARE(0x68080c0, internal_68080c0, public_68080c0);
extern "C" NAKED register_t __cdecl internal_68080c0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, 0x14
        push esi
        push edi
        mov edi, dword ptr ds : [eax+8]
        jge public_68080d8
        xor esi, esi
        jmp public_68080db
        public_68080d8 : nop
        lea esi, ds:[ecx-0x14]
        public_68080db : nop
        dec ecx
        cmp ecx, esi
        jl public_6808102
        mov edx, ecx
        shl edx, 4
        add edx, edi
        public_68080e7 : nop
        cmp dword ptr ds : [edx], 0xFFFFFFFF
        jne public_68080fa
        fld qword ptr ds : [edx+8]
        fcomp qword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x40
        jne public_680812f
        public_68080fa : nop
        dec ecx
        sub edx, 0x10
        cmp ecx, esi
        jge public_68080e7
        public_6808102 : nop
        push ebx
        call public_68075c0
        mov ecx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov edx, eax
        shl edx, 4
        add ecx, edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        pop edi
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], esi
        pop esi
        pop ebx
        ret 
        public_680812f : nop
        pop edi
        pop esi
        mov eax, ecx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x68080c0)
    }
}

#undef public_68080d8
#undef public_68080db
#undef public_68080e7
#undef public_68080fa
#undef public_6808102
#undef public_680812f
