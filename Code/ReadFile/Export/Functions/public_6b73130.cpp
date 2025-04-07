#include "ReadFile-PCH.h"


#define public_6b73140 _public_6b73140
#define public_6b73148 _public_6b73148
#define public_6b7315c _public_6b7315c
#define public_6b7317c _public_6b7317c
#define public_6b73191 _public_6b73191
#define public_6b731a8 _public_6b731a8
#define public_6b731bb _public_6b731bb
#define public_6b731bf _public_6b731bf
#define public_6b731d4 _public_6b731d4
#define public_6b731d7 _public_6b731d7
#define public_6b731db _public_6b731db
#define public_6b731f0 _public_6b731f0
#define public_6b73207 _public_6b73207
#define public_6b73218 _public_6b73218
#define public_6b7321d _public_6b7321d
#define public_6b7322b _public_6b7322b
#define public_6b7323c _public_6b7323c
#define public_6b73240 _public_6b73240
#define public_6b73267 _public_6b73267

PROC_DECLARE(0x6b73130, internal_6b73130, public_6b73130);
extern "C" NAKED register_t __cdecl internal_6b73130()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        cmp edi, 2
        jg public_6b73148
        public_6b73140 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret 0x10
        public_6b73148 : nop
        mov al, byte ptr ds : [esi]
        test al, al
        je public_6b7317c
        cmp al, 0x5C
        je public_6b7315c
        cmp al, 0x2F
        je public_6b7315c
        cmp byte ptr ds : [esi+1], 0x3A
        jne public_6b7317c
        public_6b7315c : nop
        push edi
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push esi
        call dword ptr ds : [public_6b79074]
        add esp, 0xC
        mov byte ptr ds : [esi+edi-1], 0
        mov eax, 1
        pop edi
        pop esi
        pop ebp
        ret 0x10
        public_6b7317c : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x14]
        xor eax, eax
        mov cl, byte ptr ds : [edx+0x128]
        test cl, cl
        je public_6b731a8
        dec edi
        public_6b73191 : nop
        cmp eax, edi
        jge public_6b73140
        mov byte ptr ds : [eax+ebp], cl
        mov cl, byte ptr ds : [edx+eax+0x129]
        inc eax
        test cl, cl
        jne public_6b73191
        mov edi, dword ptr ss : [esp+0x1C]
        public_6b731a8 : nop
        add eax, ebp
        cmp eax, ebp
        je public_6b731bb
        mov cl, byte ptr ds : [eax-1]
        cmp cl, 0x5C
        je public_6b731bf
        cmp cl, 0x2F
        je public_6b731bf
        public_6b731bb : nop
        mov byte ptr ds : [eax], 0x5C
        inc eax
        public_6b731bf : nop
        mov cl, byte ptr ds : [esi]
        mov dl, 0x2E
        cmp cl, dl
        jne public_6b7322b
        mov cl, byte ptr ds : [esi+1]
        cmp cl, 0x5C
        je public_6b731d4
        cmp cl, 0x2F
        jne public_6b731d7
        public_6b731d4 : nop
        add esi, 2
        public_6b731d7 : nop
        cmp byte ptr ds : [esi], dl
        jne public_6b7322b
        public_6b731db : nop
        cmp byte ptr ds : [esi+1], dl
        jne public_6b7322b
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, 2
        jle public_6b73140
        sub eax, 2
        public_6b731f0 : nop
        mov cl, byte ptr ds : [eax]
        cmp cl, 0x5C
        je public_6b73207
        cmp cl, 0x2F
        je public_6b73207
        cmp eax, ebp
        je public_6b73140
        dec eax
        jmp public_6b731f0
        public_6b73207 : nop
        mov cl, byte ptr ds : [esi+2]
        cmp cl, 0x5C
        je public_6b73218
        cmp cl, 0x2F
        je public_6b73218
        xor ecx, ecx
        jmp public_6b7321d
        public_6b73218 : nop
        mov ecx, 1
        public_6b7321d : nop
        and ecx, 0xFF
        lea esi, ds:[esi+ecx+2]
        cmp byte ptr ds : [esi], dl
        je public_6b731db
        public_6b7322b : nop
        cmp eax, ebp
        je public_6b7323c
        mov cl, byte ptr ds : [eax-1]
        cmp cl, 0x5C
        je public_6b73240
        cmp cl, 0x2F
        je public_6b73240
        public_6b7323c : nop
        mov byte ptr ds : [eax], 0x5C
        inc eax
        public_6b73240 : nop
        mov ecx, ebp
        sub ecx, eax
        add ecx, edi
        cmp ecx, 1
        jle public_6b73267
        push ecx
        push esi
        push eax
        call dword ptr ds : [public_6b79074]
        add esp, 0xC
        mov byte ptr ds : [edi+ebp-1], 0
        mov eax, 1
        pop edi
        pop esi
        pop ebp
        ret 0x10
        public_6b73267 : nop
        pop edi
        mov byte ptr ds : [eax], 0
        pop esi
        mov eax, 1
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6b73130)
    }
}

#undef public_6b73140
#undef public_6b73148
#undef public_6b7315c
#undef public_6b7317c
#undef public_6b73191
#undef public_6b731a8
#undef public_6b731bb
#undef public_6b731bf
#undef public_6b731d4
#undef public_6b731d7
#undef public_6b731db
#undef public_6b731f0
#undef public_6b73207
#undef public_6b73218
#undef public_6b7321d
#undef public_6b7322b
#undef public_6b7323c
#undef public_6b73240
#undef public_6b73267
