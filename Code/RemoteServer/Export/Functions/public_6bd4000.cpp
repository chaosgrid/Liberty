#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bd4030 _public_6bd4030
#define public_6bd4045 _public_6bd4045
#define public_6bd4054 _public_6bd4054
#define public_6bd4081 _public_6bd4081
#define public_6bd4090 _public_6bd4090
#define public_6bd40bd _public_6bd40bd

PROC_DECLARE(0x6bd4000, internal_6bd4000, public_6bd4000);
extern "C" NAKED register_t __cdecl internal_6bd4000()
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
        je public_6bd4045
        public_6bd4030 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x20
        mov ecx, 8
        add edx, 0x20
        cmp eax, ebp
        rep movsd
        jne public_6bd4030
        public_6bd4045 : nop
        mov dword ptr ds : [ebx+0x78], edx
        mov edi, dword ptr ds : [ebx+0x84]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6bd4081
        public_6bd4054 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6c09aaa
        mov ecx, dword ptr ds : [ebx+0x88]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [ebx+0x88], ecx
        jne public_6bd4054
        public_6bd4081 : nop
        mov edi, dword ptr ds : [ebx+0x90]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6bd40bd
        lea ecx, ds:[ecx]
        public_6bd4090 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6c09aaa
        mov ecx, dword ptr ds : [ebx+0x94]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [ebx+0x94], ecx
        jne public_6bd4090
        public_6bd40bd : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6bd4000)
    }
}

#undef public_6bd4030
#undef public_6bd4045
#undef public_6bd4054
#undef public_6bd4081
#undef public_6bd4090
#undef public_6bd40bd
