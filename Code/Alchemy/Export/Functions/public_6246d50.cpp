#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_PROC_SYMBOL(public_6246d50);
CLANG_FORWARD_PROC_SYMBOL(public_6247110);

#define public_6246d84 _public_6246d84
#define public_6246d86 _public_6246d86
#define public_6246d8e _public_6246d8e
#define public_6246d93 _public_6246d93
#define public_6246d9f _public_6246d9f
#define public_6246dc0 _public_6246dc0
#define public_6246dd4 _public_6246dd4
#define public_6246dde _public_6246dde
#define public_6246dfa _public_6246dfa
#define public_6246e16 _public_6246e16
#define public_6246e1a _public_6246e1a
#define public_6246e2d _public_6246e2d
#define public_6246e71 _public_6246e71
#define public_6246e90 _public_6246e90
#define public_6246ebd _public_6246ebd
#define public_6246ec1 _public_6246ec1
#define public_6246edc _public_6246edc
#define public_6246eee _public_6246eee
#define public_6246f06 _public_6246f06
#define public_6246f13 _public_6246f13
#define public_6246f42 _public_6246f42
#define public_6246f5d _public_6246f5d
#define public_6246f79 _public_6246f79
#define public_6246f8a _public_6246f8a
#define public_6246fb7 _public_6246fb7
#define public_6246fc4 _public_6246fc4
#define public_6246fe5 _public_6246fe5
#define public_6246fe8 _public_6246fe8

PROC_DECLARE(0x6246d50, internal_6246d50, public_6246d50);
extern "C" NAKED register_t __cdecl internal_6246d50()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub eax, esi
        push edi
        sar eax, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6246e90
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6246d84
        mov eax, esi
        sub eax, ecx
        sar eax, 4
        cmp ebx, eax
        jb public_6246d86
        public_6246d84 : nop
        mov eax, ebx
        public_6246d86 : nop
        test ecx, ecx
        jne public_6246d8e
        xor esi, esi
        jmp public_6246d93
        public_6246d8e : nop
        sub esi, ecx
        sar esi, 4
        public_6246d93 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_6246d9f
        xor eax, eax
        public_6246d9f : nop
        shl eax, 4
        push eax
        call public_624612c
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ss : [esp+0x20]
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        mov esi, dword ptr ds : [ecx+4]
        mov edi, eax
        cmp esi, ebp
        je public_6246dd4
        public_6246dc0 : nop
        push esi
        push edi
        call public_6247110
        add esi, 0x10
        add esp, 8
        add edi, 0x10
        cmp esi, ebp
        jne public_6246dc0
        public_6246dd4 : nop
        test ebx, ebx
        mov esi, edi
        jbe public_6246dfa
        mov dword ptr ss : [esp+0x1C], ebx
        public_6246dde : nop
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        push esi
        call public_6247110
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        add esi, 0x10
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6246dde
        public_6246dfa : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, ebx
        shl eax, 4
        add eax, edi
        mov edi, dword ptr ds : [ecx+8]
        cmp ebp, edi
        mov esi, ebp
        je public_6246e2d
        sub eax, ebp
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6246e1a
        public_6246e16 : nop
        mov eax, dword ptr ss : [esp+0x24]
        public_6246e1a : nop
        add eax, esi
        push esi
        push eax
        call public_6247110
        add esi, 0x10
        add esp, 8
        cmp esi, edi
        jne public_6246e16
        public_6246e2d : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_62460e0
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x18]
        add esp, 4
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 4
        add eax, esi
        test edx, edx
        mov dword ptr ds : [ecx+0xC], eax
        jne public_6246e71
        xor eax, eax
        mov dword ptr ds : [ecx+4], esi
        mov eax, ebx
        pop edi
        shl eax, 4
        add eax, esi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_6246e71 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [ecx+4], esi
        sub eax, edx
        pop edi
        sar eax, 4
        add eax, ebx
        shl eax, 4
        add eax, esi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_6246e90 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov edx, esi
        sub edx, edi
        sar edx, 4
        cmp edx, ebx
        jae public_6246f42
        mov edx, ebx
        mov ebp, edi
        shl edx, 4
        cmp edi, esi
        mov dword ptr ss : [esp+0x1C], edx
        lea eax, ds:[edx+edi]
        je public_6246edc
        sub eax, edi
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6246ec1
        public_6246ebd : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_6246ec1 : nop
        add eax, ebp
        push ebp
        push eax
        call public_6247110
        add ebp, 0x10
        add esp, 8
        cmp ebp, esi
        jne public_6246ebd
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6246edc : nop
        mov ebp, dword ptr ds : [ecx+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov eax, ebp
        sub eax, edi
        sar eax, 4
        sub ebx, eax
        je public_6246f06
        public_6246eee : nop
        push esi
        push ebp
        call public_6247110
        add esp, 8
        add ebp, 0x10
        dec ebx
        jne public_6246eee
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6246f06 : nop
        mov ebx, dword ptr ds : [ecx+8]
        mov eax, edi
        cmp edi, ebx
        je public_6246fe5
        public_6246f13 : nop
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edi
        mov edi, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edi
        mov edi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+0xC], edi
        add eax, 0x10
        cmp eax, ebx
        jne public_6246f13
        mov eax, dword ptr ds : [ecx+8]
        pop edi
        add eax, edx
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_6246f42 : nop
        test ebx, ebx
        jbe public_6246fe8
        shl ebx, 4
        mov edx, ebx
        mov ebx, esi
        sub ebx, edx
        mov ebp, esi
        cmp ebx, esi
        mov dword ptr ss : [esp+0x1C], edx
        je public_6246f79
        public_6246f5d : nop
        push ebx
        push ebp
        call public_6247110
        add ebx, 0x10
        add esp, 8
        add ebp, 0x10
        cmp ebx, esi
        jne public_6246f5d
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x1C]
        public_6246f79 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov eax, esi
        sub eax, edx
        cmp edi, eax
        je public_6246fb7
        lea edx, ds:[esi+8]
        lea ecx, ds:[eax+8]
        public_6246f8a : nop
        mov ebx, dword ptr ds : [eax-0x10]
        sub eax, 0x10
        sub esi, 0x10
        sub ecx, 0x10
        sub edx, 0x10
        cmp eax, edi
        mov dword ptr ds : [esi], ebx
        mov ebx, dword ptr ds : [ecx-4]
        mov dword ptr ds : [edx-4], ebx
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebx
        jne public_6246f8a
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x1C]
        public_6246fb7 : nop
        lea esi, ds:[edx+edi]
        mov eax, edi
        cmp edi, esi
        je public_6246fe5
        mov edx, dword ptr ss : [esp+0x24]
        public_6246fc4 : nop
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], edi
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edi
        mov edi, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0xC], edi
        add eax, 0x10
        cmp eax, esi
        jne public_6246fc4
        mov edx, dword ptr ss : [esp+0x1C]
        public_6246fe5 : nop
        add dword ptr ds : [ecx+8], edx
        public_6246fe8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6246d50)
    }
}

#undef public_6246d84
#undef public_6246d86
#undef public_6246d8e
#undef public_6246d93
#undef public_6246d9f
#undef public_6246dc0
#undef public_6246dd4
#undef public_6246dde
#undef public_6246dfa
#undef public_6246e16
#undef public_6246e1a
#undef public_6246e2d
#undef public_6246e71
#undef public_6246e90
#undef public_6246ebd
#undef public_6246ec1
#undef public_6246edc
#undef public_6246eee
#undef public_6246f06
#undef public_6246f13
#undef public_6246f42
#undef public_6246f5d
#undef public_6246f79
#undef public_6246f8a
#undef public_6246fb7
#undef public_6246fc4
#undef public_6246fe5
#undef public_6246fe8
