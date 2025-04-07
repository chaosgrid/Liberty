#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5700);
CLANG_FORWARD_PROC_SYMBOL(public_6bd5710);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bd4104 _public_6bd4104
#define public_6bd411b _public_6bd411b
#define public_6bd4130 _public_6bd4130
#define public_6bd4172 _public_6bd4172
#define public_6bd4180 _public_6bd4180
#define public_6bd41c2 _public_6bd41c2

PROC_DECLARE(0x6bd40d0, internal_6bd40d0, public_6bd40d0);
extern "C" NAKED register_t __cdecl internal_6bd40d0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        xor edi, edi
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [ebp+0x10], 0xFFFFFFFF
        mov dword ptr ss : [ebp+0x48], edi
        mov dword ptr ss : [ebp+0x6C], edi
        mov byte ptr ss : [ebp+0xA8], 0
        mov ebx, dword ptr ss : [ebp+0x78]
        mov edx, dword ptr ss : [ebp+0x74]
        mov eax, ebx
        cmp eax, ebx
        je public_6bd411b
        public_6bd4104 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x20
        mov ecx, 8
        add edx, 0x20
        cmp eax, ebx
        rep movsd
        jne public_6bd4104
        xor edi, edi
        public_6bd411b : nop
        mov dword ptr ss : [ebp+0x78], edx
        mov ebx, dword ptr ss : [ebp+0x84]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6bd4172
        lea ebx, ds:[ebx]
        public_6bd4130 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x10], eax
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6bd5700
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6c09aaa
        mov ecx, dword ptr ss : [ebp+0x88]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ss : [ebp+0x88], ecx
        jne public_6bd4130
        public_6bd4172 : nop
        mov ebx, dword ptr ss : [ebp+0x90]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6bd41c2
        mov edi, edi
        public_6bd4180 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x10], eax
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6bd5710
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6c09aaa
        mov ecx, dword ptr ss : [ebp+0x94]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ss : [ebp+0x94], ecx
        jne public_6bd4180
        public_6bd41c2 : nop
        mov dword ptr ss : [ebp+0xAC], edi
        mov dword ptr ss : [ebp+0xB0], edi
        mov dword ptr ss : [ebp+0xB4], edi
        mov dword ptr ss : [ebp+0xD0], edi
        mov dword ptr ss : [ebp+0xD8], edi
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0xD4], 0xFFFFFFFF
        mov byte ptr ss : [ebp+0xDC], 0
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6bd40d0)
    }
}

#undef public_6bd4104
#undef public_6bd411b
#undef public_6bd4130
#undef public_6bd4172
#undef public_6bd4180
#undef public_6bd41c2
