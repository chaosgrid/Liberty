#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4eda0);

#define public_6d56059 _public_6d56059
#define public_6d56094 _public_6d56094
#define public_6d560a3 _public_6d560a3
#define public_6d560b5 _public_6d560b5
#define public_6d560db _public_6d560db
#define public_6d56106 _public_6d56106
#define public_6d5611a _public_6d5611a
#define public_6d56126 _public_6d56126
#define public_6d56130 _public_6d56130
#define public_6d56139 _public_6d56139
#define public_6d56147 _public_6d56147
#define public_6d56156 _public_6d56156
#define public_6d56162 _public_6d56162

PROC_DECLARE(0x6d55fe0, internal_6d55fe0, public_6d55fe0);
extern "C" NAKED register_t __cdecl internal_6d55fe0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        push ebx
        push esi
        push edi
        jbe public_6d56162
        mov esi, dword ptr ds : [public_6d90264]
        lea eax, ds:[ecx-1]
        cmp eax, esi
        jae public_6d56162
        mov edx, dword ptr ds : [public_6d90260]
        mov edi, eax
        imul edi, 0x418
        mov ebx, dword ptr ds : [edi+edx+0x348]
        test ebx, ebx
        je public_6d56162
        cmp eax, esi
        jae public_6d560b5
        imul eax, 0x418
        mov esi, dword ptr ds : [eax+edx+0x348]
        test esi, esi
        je public_6d560b5
        imul ecx, 0x418
        lea esi, ds:[ecx+edx-0x418]
        call dword ptr ds : [public_6d647e8]
        test al, al
        je public_6d56059
        mov dl, byte ptr ds : [esi+0x64]
        test dl, dl
        setne al
        test al, al
        je public_6d560b5
        public_6d56059 : nop
        mov ecx, esi
        call public_6d4eda0
        mov edi, eax
        test edi, edi
        je public_6d560b5
        push edi
        call dword ptr ds : [public_6d64c80]
        mov ebx, dword ptr ss : [esp+0x18]
        add esp, 4
        mov esi, eax
        push 1
        push esi
        mov ecx, ebx
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d56162
        test esi, esi
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, edi
        jbe public_6d560a3
        mov edx, esi
        public_6d56094 : nop
        mov di, word ptr ds : [ecx]
        mov word ptr ds : [eax], di
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6d56094
        public_6d560a3 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], esi
        pop edi
        mov word ptr ds : [eax+esi*2], 0
        pop esi
        xor eax, eax
        pop ebx
        ret 
/*FIXUP public_6d560b5 : nop
        push offset public_6d6b994 @0x6d560b5*/
  FIXUP public_6d560b5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b994
        call dword ptr ds : [public_6d64c80]
        mov edi, dword ptr ss : [esp+0x18]
        add esp, 4
        mov ecx, edi
        mov esi, eax
        call dword ptr ds : [public_6d64b48]
        cmp eax, esi
        jae public_6d560db
        call dword ptr ds : [public_6d64b4c]
        public_6d560db : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6d56106
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6d56106
        cmp cl, 0xFF
        je public_6d56106
        test esi, esi
        jne public_6d56130
        dec cl
        mov byte ptr ds : [eax-1], cl
        push esi
        mov ecx, edi
        call dword ptr ds : [public_6d64b58]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_6d56106 : nop
        test esi, esi
        jne public_6d5611a
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6d64b58]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_6d5611a : nop
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, 0x1F
        ja public_6d56126
        cmp eax, esi
        jae public_6d56139
        public_6d56126 : nop
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6d64b58]
        public_6d56130 : nop
        mov ecx, edi
        push esi
        call dword ptr ds : [public_6d64b44]
        public_6d56139 : nop
        test esi, esi
        mov eax, dword ptr ds : [edi+4]
        mov ecx, offset public_6d6b994
        jbe public_6d56156
        mov edx, esi
        public_6d56147 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6d56147
        public_6d56156 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+8], esi
        mov word ptr ds : [ecx+esi*2], 0
        public_6d56162 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d55fe0)
    }
}

#undef public_6d56059
#undef public_6d56094
#undef public_6d560a3
#undef public_6d560b5
#undef public_6d560db
#undef public_6d56106
#undef public_6d5611a
#undef public_6d56126
#undef public_6d56130
#undef public_6d56139
#undef public_6d56147
#undef public_6d56156
#undef public_6d56162
