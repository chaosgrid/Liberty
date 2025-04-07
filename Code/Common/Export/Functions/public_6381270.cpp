#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6377e60);
CLANG_FORWARD_PROC_SYMBOL(public_6381270);

#define public_638129a _public_638129a
#define public_63812a3 _public_63812a3
#define public_63812c2 _public_63812c2
#define public_63812da _public_63812da

PROC_DECLARE(0x6381270, internal_6381270, public_6381270);
extern "C" NAKED register_t __cdecl internal_6381270()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b980]
        mov edx, dword ptr ds : [public_658b804]
        mov ecx, dword ptr ds : [eax+edx*4]
        mov eax, dword ptr ds : [public_658b978]
        lea ecx, ds:[eax+ecx*4]
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_638129a
        inc dword ptr ds : [public_658b99c]
        mov edx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], edx
        jmp public_63812a3
        public_638129a : nop
        push edx
        call public_6377e60
        add esp, 4
        public_63812a3 : nop
        mov edx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [edx+0x18]
        push esi
        mov esi, dword ptr ds : [public_658b24c]
        push edi
        mov edi, esi
        dec esi
        test edi, edi
        mov ecx, eax
        je public_63812da
        lea edi, ds:[esi+1]
        mov esi, dword ptr ss : [esp+0xC]
        public_63812c2 : nop
        fld qword ptr ss : [esp+0x14]
        add ecx, 8
        fmul qword ptr ds : [edx]
        add edx, 8
        add esi, 8
        dec edi
        fsubr qword ptr ds : [esi-8]
        fstp qword ptr ds : [ecx-8]
        jne public_63812c2
        public_63812da : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6381270)
    }
}

#undef public_638129a
#undef public_63812a3
#undef public_63812c2
#undef public_63812da
