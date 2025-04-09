#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46fa50);
CLANG_FORWARD_PROC_SYMBOL(public_470fd0);
CLANG_FORWARD_PROC_SYMBOL(public_536020);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_470ff4 _public_470ff4
#define public_471012 _public_471012
#define public_47101d _public_47101d
#define public_471026 _public_471026
#define public_471031 _public_471031
#define public_47104d _public_47104d
#define public_471064 _public_471064
#define public_471071 _public_471071
#define public_47107c _public_47107c
#define public_47107f _public_47107f
#define public_471097 _public_471097
#define public_4710a2 _public_4710a2
#define public_4710a5 _public_4710a5
#define public_4710ba _public_4710ba
#define public_4710c5 _public_4710c5
#define public_4710d0 _public_4710d0
#define public_4710d3 _public_4710d3
#define public_4710e7 _public_4710e7
#define public_4710f3 _public_4710f3
#define public_4710ff _public_4710ff
#define public_471102 _public_471102
#define public_471120 _public_471120
#define public_47115f _public_47115f
#define public_471172 _public_471172
#define public_47117d _public_47117d
#define public_471180 _public_471180
#define public_47118b _public_47118b
#define public_47119e _public_47119e
#define public_4711c5 _public_4711c5
#define public_4711df _public_4711df
#define public_471205 _public_471205
#define public_471218 _public_471218
#define public_471225 _public_471225
#define public_471227 _public_471227
#define public_471232 _public_471232
#define public_471249 _public_471249
#define public_471261 _public_471261
#define public_47126e _public_47126e
#define public_471270 _public_471270
#define public_47127c _public_47127c
#define public_4712a6 _public_4712a6
#define public_4712be _public_4712be
#define public_4712ce _public_4712ce
#define public_4712d8 _public_4712d8
#define public_4712fb _public_4712fb
#define public_47130e _public_47130e
#define public_471319 _public_471319
#define public_47131c _public_47131c
#define public_471326 _public_471326
#define public_47134f _public_47134f
#define public_471362 _public_471362
#define public_47136f _public_47136f
#define public_471371 _public_471371
#define public_471374 _public_471374
#define public_471377 _public_471377
#define public_47137e _public_47137e

PROC_DECLARE(0x470fd0, internal_470fd0, public_470fd0);
extern "C" NAKED register_t __cdecl internal_470fd0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_536020
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_471012
        mov eax, dword ptr ds : [esi+8]
        public_470ff4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_471097
        mov dword ptr ds : [ecx+4], eax
        jmp public_4710a5
        public_471012 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_47101d
        mov eax, edx
        jmp public_470ff4
        public_47101d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        jne public_471031
        public_471026 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        je public_471026
        public_471031 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_470ff4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_47104d
        mov dword ptr ds : [eax+4], ecx
        jmp public_471064
        public_47104d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_471064 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_471071
        mov dword ptr ds : [edx+4], ecx
        jmp public_47107f
        public_471071 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_47107c
        mov dword ptr ds : [edx], ecx
        jmp public_47107f
        public_47107c : nop
        mov dword ptr ds : [edx+8], ecx
        public_47107f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x18]
        mov dl, byte ptr ds : [ecx+0x18]
        mov byte ptr ds : [ecx+0x18], bl
        mov byte ptr ds : [esi+0x18], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_471102
        public_471097 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_4710a2
        mov dword ptr ds : [ecx], eax
        jmp public_4710a5
        public_4710a2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_4710a5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_4710d3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4710ba
        mov edx, dword ptr ds : [esi+4]
        jmp public_4710d0
        public_4710ba : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        mov edx, eax
        jne public_4710d0
        public_4710c5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        je public_4710c5
        public_4710d0 : nop
        mov dword ptr ss : [ebp], edx
        public_4710d3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_471102
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4710e7
        mov edx, dword ptr ds : [esi+4]
        jmp public_4710ff
        public_4710e7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        mov edx, eax
        jne public_4710ff
        public_4710f3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        je public_4710f3
        public_4710ff : nop
        mov dword ptr ss : [ebp+8], edx
        public_471102 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x18]
        mov bl, 1
        cmp cl, bl
        jne public_47137e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_471377
        nop 
        public_471120 : nop
        cmp byte ptr ds : [eax+0x18], bl
        jne public_471377
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_4711df
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_47118b
        mov byte ptr ds : [ecx+0x18], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x18], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_47115f
        mov dword ptr ds : [esi+4], ecx
        public_47115f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_471172
        mov dword ptr ds : [esi+4], edx
        jmp public_471180
        public_471172 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_47117d
        mov dword ptr ds : [esi], edx
        jmp public_471180
        public_47117d : nop
        mov dword ptr ds : [esi+8], edx
        public_471180 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_47118b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_47119e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x18], bl
        je public_471249
        public_47119e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_47127c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x18], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x18], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_4711c5
        mov dword ptr ds : [esi+4], ecx
        public_4711c5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_471261
        mov dword ptr ds : [esi+4], edx
        jmp public_471270
        public_4711df : nop
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_471232
        mov byte ptr ds : [ecx+0x18], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_471205
        mov dword ptr ds : [esi+4], ecx
        public_471205 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_471218
        mov dword ptr ds : [esi+4], edx
        jmp public_471227
        public_471218 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_471225
        mov dword ptr ds : [esi+8], edx
        jmp public_471227
        public_471225 : nop
        mov dword ptr ds : [esi], edx
        public_471227 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_471232 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_4712d8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_4712d8
        public_471249 : nop
        mov byte ptr ds : [ecx+0x18], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_471120
        jmp public_471377
        public_471261 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_47126e
        mov dword ptr ds : [esi+8], edx
        jmp public_471270
        public_47126e : nop
        mov dword ptr ds : [esi], edx
        public_471270 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_47127c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x18]
        mov byte ptr ds : [ecx+0x18], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x18], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x18], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_4712a6
        mov dword ptr ds : [esi+4], ecx
        public_4712a6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4712be
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_471374
        public_4712be : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_4712ce
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_471374
        public_4712ce : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_471374
        public_4712d8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_471326
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x18], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x18], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_4712fb
        mov dword ptr ds : [esi+4], ecx
        public_4712fb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_47130e
        mov dword ptr ds : [esi+4], edx
        jmp public_47131c
        public_47130e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_471319
        mov dword ptr ds : [esi], edx
        jmp public_47131c
        public_471319 : nop
        mov dword ptr ds : [esi+8], edx
        public_47131c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_471326 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x18]
        mov byte ptr ds : [ecx+0x18], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x18], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x18], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_47134f
        mov dword ptr ds : [esi+4], ecx
        public_47134f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_471362
        mov dword ptr ds : [esi+4], edx
        jmp public_471371
        public_471362 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_47136f
        mov dword ptr ds : [esi+8], edx
        jmp public_471371
        public_47136f : nop
        mov dword ptr ds : [esi], edx
        public_471371 : nop
        mov dword ptr ds : [edx+8], ecx
        public_471374 : nop
        mov dword ptr ds : [ecx+4], edx
        public_471377 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x18], bl
        public_47137e : nop
        lea ecx, ds:[esi+0xC]
        call public_46fa50
        push esi
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x470fd0)
    }
}

#undef public_470ff4
#undef public_471012
#undef public_47101d
#undef public_471026
#undef public_471031
#undef public_47104d
#undef public_471064
#undef public_471071
#undef public_47107c
#undef public_47107f
#undef public_471097
#undef public_4710a2
#undef public_4710a5
#undef public_4710ba
#undef public_4710c5
#undef public_4710d0
#undef public_4710d3
#undef public_4710e7
#undef public_4710f3
#undef public_4710ff
#undef public_471102
#undef public_471120
#undef public_47115f
#undef public_471172
#undef public_47117d
#undef public_471180
#undef public_47118b
#undef public_47119e
#undef public_4711c5
#undef public_4711df
#undef public_471205
#undef public_471218
#undef public_471225
#undef public_471227
#undef public_471232
#undef public_471249
#undef public_471261
#undef public_47126e
#undef public_471270
#undef public_47127c
#undef public_4712a6
#undef public_4712be
#undef public_4712ce
#undef public_4712d8
#undef public_4712fb
#undef public_47130e
#undef public_471319
#undef public_47131c
#undef public_471326
#undef public_47134f
#undef public_471362
#undef public_47136f
#undef public_471371
#undef public_471374
#undef public_471377
#undef public_47137e
