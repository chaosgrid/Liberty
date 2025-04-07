#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eacdf0);

#define public_6eace10 _public_6eace10
#define public_6eace1e _public_6eace1e
#define public_6eace2b _public_6eace2b
#define public_6eace35 _public_6eace35
#define public_6eace41 _public_6eace41
#define public_6eace4a _public_6eace4a

PROC_DECLARE(0x6eacdf0, internal_6eacdf0, public_6eacdf0);
extern "C" NAKED register_t __cdecl internal_6eacdf0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0xC5]
        test al, al
        jne public_6eace2b
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xC5]
        test bl, bl
        jne public_6eace1e
        lea ecx, ds:[ecx]
        public_6eace10 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xC5]
        test bl, bl
        je public_6eace10
        public_6eace1e : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6eace2b : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6eace41
        public_6eace35 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6eace35
        public_6eace41 : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6eace4a
        mov dword ptr ds : [ecx], eax
        public_6eace4a : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6eacdf0)
    }
}

#undef public_6eace10
#undef public_6eace1e
#undef public_6eace2b
#undef public_6eace35
#undef public_6eace41
#undef public_6eace4a
