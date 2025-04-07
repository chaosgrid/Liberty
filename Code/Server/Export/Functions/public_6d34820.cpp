#include "Server-PCH.h"


#define public_6d34862 _public_6d34862
#define public_6d34878 _public_6d34878
#define public_6d34885 _public_6d34885
#define public_6d34893 _public_6d34893
#define public_6d34897 _public_6d34897
#define public_6d348ab _public_6d348ab
#define public_6d348b2 _public_6d348b2
#define public_6d348cb _public_6d348cb
#define public_6d348e3 _public_6d348e3
#define public_6d348f1 _public_6d348f1
#define public_6d348fb _public_6d348fb

PROC_DECLARE(0x6d34820, internal_6d34820, public_6d34820);
extern "C" NAKED register_t __cdecl internal_6d34820()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov ebp, ecx
        mov ecx, dword ptr ds : [ebx+0xC]
        push edi
        xor edi, edi
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], ebp
        je public_6d348ab
        cmp word ptr ds : [esi], 0xA
        je public_6d348ab
        lea edx, ds:[esi+2]
        cmp edx, esi
        jne public_6d34885
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6d34862
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
        public_6d34862 : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d34878
        cmp dword ptr ds : [ebx+8], esi
        jne public_6d34878
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        public_6d34878 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        pop ecx
        ret 8
        public_6d34885 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d34893
        mov esi, edx
        mov edi, 1
        public_6d34893 : nop
        cmp edi, eax
        jae public_6d348b2
        public_6d34897 : nop
        cmp ecx, esi
        je public_6d348fb
        cmp word ptr ds : [esi], 0xA
        je public_6d348fb
        add esi, 2
        inc edi
        cmp edi, eax
        jb public_6d34897
        jmp public_6d348b2
        public_6d348ab : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        jne public_6d348fb
        public_6d348b2 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6d348e3
        mov edx, dword ptr ds : [ecx]
        push esi
        push ebx
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        jne public_6d348f1
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d348cb : nop
        cmp edi, dword ptr ss : [ebp+0x10]
        jae public_6d348fb
        mov eax, dword ptr ds : [ebx+0xC]
        inc edi
        cmp eax, esi
        je public_6d348fb
        cmp word ptr ds : [esi], 0xA
        je public_6d348fb
        add esi, 2
        jmp public_6d348b2
        public_6d348e3 : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d348f1
        cmp dword ptr ds : [ebx+8], esi
        jne public_6d348f1
        jmp public_6d348cb
        public_6d348f1 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6d348fb : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d34820)
    }
}

#undef public_6d34862
#undef public_6d34878
#undef public_6d34885
#undef public_6d34893
#undef public_6d34897
#undef public_6d348ab
#undef public_6d348b2
#undef public_6d348cb
#undef public_6d348e3
#undef public_6d348f1
#undef public_6d348fb
