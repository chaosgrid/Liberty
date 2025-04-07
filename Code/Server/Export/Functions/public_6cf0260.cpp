#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cf0290 _public_6cf0290
#define public_6cf02a5 _public_6cf02a5
#define public_6cf02b4 _public_6cf02b4
#define public_6cf02e1 _public_6cf02e1
#define public_6cf02f0 _public_6cf02f0
#define public_6cf031d _public_6cf031d

PROC_DECLARE(0x6cf0260, internal_6cf0260, public_6cf0260);
extern "C" NAKED register_t __cdecl internal_6cf0260()
{
    __asm
    {
        xor eax, eax
        push ebx
        mov ebx, ecx
        push ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        mov dword ptr ds : [ebx+0x48], eax
        mov dword ptr ds : [ebx+0x6C], eax
        mov byte ptr ds : [ebx+0xA8], al
        mov dword ptr ds : [ebx+0x10], 0xFFFFFFFF
        mov ebp, dword ptr ds : [ebx+0x78]
        mov edx, dword ptr ds : [ebx+0x74]
        mov eax, ebp
        cmp eax, ebp
        push esi
        push edi
        je public_6cf02a5
        public_6cf0290 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x20
        mov ecx, 8
        add edx, 0x20
        cmp eax, ebp
        rep movsd
        jne public_6cf0290
        public_6cf02a5 : nop
        mov dword ptr ds : [ebx+0x78], edx
        mov edi, dword ptr ds : [ebx+0x84]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6cf02e1
        public_6cf02b4 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ds : [ebx+0x88]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [ebx+0x88], ecx
        jne public_6cf02b4
        public_6cf02e1 : nop
        mov edi, dword ptr ds : [ebx+0x90]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6cf031d
        lea ecx, ds:[ecx]
        public_6cf02f0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ds : [ebx+0x94]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [ebx+0x94], ecx
        jne public_6cf02f0
        public_6cf031d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6cf0260)
    }
}

#undef public_6cf0290
#undef public_6cf02a5
#undef public_6cf02b4
#undef public_6cf02e1
#undef public_6cf02f0
#undef public_6cf031d
