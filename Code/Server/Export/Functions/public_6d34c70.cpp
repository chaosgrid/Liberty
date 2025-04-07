#include "Server-PCH.h"


#define public_6d34cac _public_6d34cac
#define public_6d34cc2 _public_6d34cc2
#define public_6d34ccf _public_6d34ccf
#define public_6d34cdd _public_6d34cdd
#define public_6d34ce1 _public_6d34ce1
#define public_6d34cef _public_6d34cef
#define public_6d34cf6 _public_6d34cf6
#define public_6d34d0f _public_6d34d0f
#define public_6d34d21 _public_6d34d21
#define public_6d34d2f _public_6d34d2f
#define public_6d34d39 _public_6d34d39

PROC_DECLARE(0x6d34c70, internal_6d34c70, public_6d34c70);
extern "C" NAKED register_t __cdecl internal_6d34c70()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov edx, ecx
        mov ecx, dword ptr ds : [ebx+0xC]
        push edi
        xor edi, edi
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6d34cef
        lea ebp, ds:[esi+2]
        cmp ebp, esi
        jne public_6d34ccf
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d34cac
        mov eax, dword ptr ds : [ecx]
        push esi
        push ebx
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        pop ecx
        ret 8
        public_6d34cac : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d34cc2
        cmp dword ptr ds : [ebx+8], esi
        jne public_6d34cc2
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        public_6d34cc2 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        pop ecx
        ret 8
        public_6d34ccf : nop
        mov eax, dword ptr ds : [edx+0xC]
        test eax, eax
        je public_6d34cdd
        mov esi, ebp
        mov edi, 1
        public_6d34cdd : nop
        cmp edi, eax
        jae public_6d34cf6
        public_6d34ce1 : nop
        cmp ecx, esi
        je public_6d34d39
        add esi, 2
        inc edi
        cmp edi, eax
        jb public_6d34ce1
        jmp public_6d34cf6
        public_6d34cef : nop
        mov eax, dword ptr ds : [edx+0xC]
        test eax, eax
        jne public_6d34d39
        public_6d34cf6 : nop
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d34d21
        mov edx, dword ptr ds : [ecx]
        push esi
        push ebx
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        jne public_6d34d2f
        mov edx, dword ptr ss : [esp+0x10]
        public_6d34d0f : nop
        cmp edi, dword ptr ds : [edx+0x10]
        jae public_6d34d39
        mov eax, dword ptr ds : [ebx+0xC]
        inc edi
        cmp eax, esi
        je public_6d34d39
        add esi, 2
        jmp public_6d34cf6
        public_6d34d21 : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d34d2f
        cmp dword ptr ds : [ebx+8], esi
        jne public_6d34d2f
        jmp public_6d34d0f
        public_6d34d2f : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6d34d39 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d34c70)
    }
}

#undef public_6d34cac
#undef public_6d34cc2
#undef public_6d34ccf
#undef public_6d34cdd
#undef public_6d34ce1
#undef public_6d34cef
#undef public_6d34cf6
#undef public_6d34d0f
#undef public_6d34d21
#undef public_6d34d2f
#undef public_6d34d39
