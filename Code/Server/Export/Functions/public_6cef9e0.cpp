#include "Server-PCH.h"


#define public_6cefa40 _public_6cefa40
#define public_6cefa68 _public_6cefa68
#define public_6cefa71 _public_6cefa71
#define public_6cefa90 _public_6cefa90

PROC_DECLARE(0x6cef9e0, internal_6cef9e0, public_6cef9e0);
extern "C" NAKED register_t __cdecl internal_6cef9e0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_6cefa90
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[edi-1]
        cmp eax, ecx
        jae public_6cefa90
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6cefa90
        mov esi, edi
        imul esi, 0x418
        mov eax, dword ptr ds : [esi+ecx-0x30]
        test eax, 0x3FFFFFFF
        je public_6cefa40
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 1
        push edi
        call dword ptr ds : [edx+0xF4]
        pop edi
        pop esi
        ret 4
        public_6cefa40 : nop
        call dword ptr ds : [public_6d642ec]
        test eax, eax
        je public_6cefa68
        mov ecx, dword ptr ds : [eax+4]
        mov edx, ecx
        and edx, 0x3FFFFFFF
        inc ecx
        test edx, 0x3FFFFFFF
        mov dword ptr ds : [eax+4], ecx
        setne al
        mov byte ptr ss : [esp+0xC], al
        jmp public_6cefa71
        public_6cefa68 : nop
        mov byte ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        public_6cefa71 : nop
        mov ecx, dword ptr ds : [public_6d90260]
        mov dword ptr ds : [esi+ecx-0x30], edx
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push edi
        call dword ptr ds : [eax+0xF4]
        public_6cefa90 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cef9e0)
    }
}

#undef public_6cefa40
#undef public_6cefa68
#undef public_6cefa71
#undef public_6cefa90
