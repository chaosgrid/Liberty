#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633ba90);
CLANG_FORWARD_PROC_SYMBOL(public_6344070);
CLANG_FORWARD_PROC_SYMBOL(public_63470e0);
CLANG_FORWARD_PROC_SYMBOL(public_6352cf0);
CLANG_FORWARD_PROC_SYMBOL(public_63563d0);
CLANG_FORWARD_PROC_SYMBOL(public_6356bc0);

#define public_63563f0 _public_63563f0
#define public_6356401 _public_6356401
#define public_635642c _public_635642c
#define public_635644d _public_635644d
#define public_63564c8 _public_63564c8
#define public_63564da _public_63564da
#define public_63564ef _public_63564ef

PROC_DECLARE(0x63563d0, internal_63563d0, public_63563d0);
extern "C" NAKED register_t __cdecl internal_63563d0()
{
    __asm
    {
        sub esp, 0x10
        push edi
        mov edi, ecx
        xor ecx, ecx
        mov cx, word ptr ds : [edi+0x52]
        xor edx, edx
        mov dword ptr ss : [esp+4], edx
        dec ecx
        mov dword ptr ss : [esp+8], ecx
        js public_63564ef
        push ebx
        push ebp
        push esi
        public_63563f0 : nop
        mov eax, dword ptr ds : [edi+0x54]
        mov eax, dword ptr ds : [eax+ecx*4]
        mov eax, dword ptr ds : [eax+0x20]
        test eax, eax
        je public_63564da
        public_6356401 : nop
        movsx esi, word ptr ds : [eax+0x18]
        mov ebp, dword ptr ds : [eax+8]
        add esi, eax
        mov eax, dword ptr ds : [esi+0x14]
        test ah, 0x30
        jne public_63564c8
        mov ecx, dword ptr ds : [esi+0x28]
        mov ebx, dword ptr ds : [ecx+0x98]
        cmp ebx, edi
        jne public_635642c
        mov edx, dword ptr ds : [esi+0x44]
        mov ebx, dword ptr ds : [edx+0x98]
        public_635642c : nop
        test byte ptr ds : [ebx], 0xC
        je public_635644d
        test byte ptr ds : [edi], 0xC
        je public_63564c8
        test esi, esi
        je public_63564c8
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        jmp public_63564c8
        public_635644d : nop
        mov ecx, ebx
        call public_633ba90
        test eax, eax
        jne public_63564c8
        mov ecx, esi
        call public_6352cf0
        mov eax, dword ptr ds : [esi+0x14]
        test ah, 0xC0
        jne public_63564c8
        fld dword ptr ds : [esi+0x54]
        fcomp dword ptr ds : [public_658ab2c]
        fnstsw ax
        test ah, 1
        je public_63564c8
        mov ecx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [ecx+0xA4]
        inc word ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [edi+0x15C]
        push 1
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, esi
        call public_6356bc0
        mov edx, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edx+0xA4]
        dec word ptr ds : [ecx+0x10]
        call public_6344070
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, 1
        cmp ecx, eax
        jne public_63564c8
        mov ecx, ebx
        mov dword ptr ss : [esp+0x10], eax
        call public_63470e0
        public_63564c8 : nop
        test ebp, ebp
        mov eax, ebp
        jne public_6356401
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        public_63564da : nop
        dec ecx
        mov dword ptr ss : [esp+0x14], ecx
        jns public_63563f0
        pop esi
        pop ebp
        pop ebx
        mov eax, edx
        pop edi
        add esp, 0x10
        ret 
        public_63564ef : nop
        mov eax, edx
        pop edi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x63563d0)
    }
}

#undef public_63563f0
#undef public_6356401
#undef public_635642c
#undef public_635644d
#undef public_63564c8
#undef public_63564da
#undef public_63564ef
