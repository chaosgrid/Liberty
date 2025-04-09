#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4abdf0);
CLANG_FORWARD_PROC_SYMBOL(public_4b0920);

#define public_4abe11 _public_4abe11
#define public_4abe74 _public_4abe74
#define public_4abecb _public_4abecb
#define public_4abef4 _public_4abef4
#define public_4abefc _public_4abefc
#define public_4abf05 _public_4abf05
#define public_4abf0c _public_4abf0c
#define public_4abf28 _public_4abf28
#define public_4abf37 _public_4abf37
#define public_4abf44 _public_4abf44
#define public_4abf7f _public_4abf7f
#define public_4abf8d _public_4abf8d

PROC_DECLARE(0x4abdf0, internal_4abdf0, public_4abdf0);
extern "C" NAKED register_t __cdecl internal_4abdf0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x7F4]
        test eax, eax
        push esi
        push edi
        mov bl, 0xFC
        jne public_4abf28
        lea esi, ss:[ebp+0x484]
        mov edi, 0xD
        public_4abe11 : nop
        mov al, byte ptr ss : [esp+0x14]
        test al, al
        mov eax, dword ptr ds : [esi-0x34]
        mov dl, byte ptr ds : [eax+0x6C]
        push 0
        je public_4abe74
        and dl, bl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi]
        and byte ptr ds : [eax+0x6C], bl
        mov ecx, dword ptr ds : [esi-0xD4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0x24
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi-0xA0]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x24
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi-0x108]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi-0xD4]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi-0xA0]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi-0x6C]
        and byte ptr ds : [eax+0x6C], bl
        jmp public_4abecb
        public_4abe74 : nop
        or dl, 3
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi-0x108]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi-0xD4]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi-0xA0]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi-0x6C]
        or byte ptr ds : [eax+0x6C], 3
        mov ecx, dword ptr ds : [esi-0xD4]
        mov eax, dword ptr ds : [ecx]
        push 1
        push 0x24
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi-0xA0]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 0x24
        call dword ptr ds : [edx+0xA8]
        public_4abecb : nop
        add esi, 4
        dec edi
        jne public_4abe11
        mov al, byte ptr ss : [esp+0x14]
        test al, al
        mov eax, dword ptr ss : [ebp+0x4B8]
        mov dl, byte ptr ds : [eax+0x6C]
        je public_4abf0c
        and dl, bl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ss : [ebp+0x44C]
        and byte ptr ds : [eax+0x6C], bl
        public_4abef4 : nop
        mov al, byte ptr ss : [esp+0x14]
        test al, al
        je public_4abf05
        public_4abefc : nop
        mov eax, dword ptr ss : [ebp+0x7F0]
        and byte ptr ds : [eax+0x6C], bl
        public_4abf05 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_4abf0c : nop
        or dl, 3
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ss : [ebp+0x44C]
        mov cl, byte ptr ds : [eax+0x6C]
        pop edi
        pop esi
        or cl, 3
        pop ebp
        mov byte ptr ds : [eax+0x6C], cl
        pop ebx
        ret 4
        public_4abf28 : nop
        cmp eax, 1
        je public_4abf37
        cmp eax, 3
        je public_4abf37
        cmp eax, 2
        jne public_4abef4
        public_4abf37 : nop
        lea esi, ss:[ebp+0x5AC]
        mov edi, 0xE
        mov bl, 0xFC
        public_4abf44 : nop
        mov al, byte ptr ss : [esp+0x14]
        test al, al
        push 0
        je public_4abf7f
        mov eax, dword ptr ds : [esi+0x38]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0xA8]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x188]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x1C0]
        and byte ptr ds : [eax+0x6C], bl
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0x24
        call dword ptr ds : [eax+0xA8]
        jmp public_4abf8d
        public_4abf7f : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push 1
        push 0x24
        call dword ptr ds : [edx+0xA8]
        public_4abf8d : nop
        add esi, 4
        dec edi
        jne public_4abf44
        mov al, byte ptr ss : [esp+0x14]
        test al, al
        jne public_4abefc
        push 0xFFFFFFFF
        mov ecx, ebp
        call public_4b0920
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4abdf0)
    }
}

#undef public_4abe11
#undef public_4abe74
#undef public_4abecb
#undef public_4abef4
#undef public_4abefc
#undef public_4abf05
#undef public_4abf0c
#undef public_4abf28
#undef public_4abf37
#undef public_4abf44
#undef public_4abf7f
#undef public_4abf8d
